#include "philosopher.h"

void	print_message(char *str, t_philo *philo, int id)
{
	size_t	time;

	pthread_mutex_lock(philo->lock_write);
	time = get_current_time() - philo->start_time;
	if (!dead_check(philo))
		printf("%zu %d %s\n", time, id, str);
	pthread_mutex_unlock(philo->lock_write);
}

int	philosopher_dead(t_philo *philo, size_t time_to_die)
{
	pthread_mutex_lock(philo->lock_meal);
	if (get_current_time() - philo->last_meal >= time_to_die
		&& philo->who_eating == 0)
		return (pthread_mutex_unlock(philo->lock_meal), 1);
	pthread_mutex_unlock(philo->lock_meal);
	return (0);
}

int	check_if_dead(t_philo *philos)
{
	int	i;

	i = 0;
	while (i < philos[0].num_of_philos)
	{
		if (philosopher_dead(&philos[i], philos[i].time_to_die))
		{
			print_message("died", &philos[i], philos[i].philo_id);
			pthread_mutex_lock(philos[0].lock_dead);
			*philos->dead = 1;
			pthread_mutex_unlock(philos[0].lock_dead);
			return (1);
		}
		i++;
	}
	return (0);
}

int	check_if_all_ate(t_philo *philos)
{
	int	i;
	int	finished_eating;

	i = 0;
	finished_eating = 0;
	if (philos[0].num_times_to_eat == -1)
		return (0);
	while (i < philos[0].num_of_philos)
	{
		pthread_mutex_lock(philos[i].lock_meal);
		if (philos[i].meals_eaten >= philos[i].num_times_to_eat)
			finished_eating++;
		pthread_mutex_unlock(philos[i].lock_meal);
		i++;
	}
	if (finished_eating == philos[0].num_of_philos)
	{
		pthread_mutex_lock(philos[0].lock_dead);
		*philos->dead = 1;
		pthread_mutex_unlock(philos[0].lock_dead);
		return (1);
	}
	return (0);
}

void	*monitor(void *pointer)
{
	t_philo	*philos;

	philos = (t_philo *)pointer;
	while (1)
		if (check_if_dead(philos) == 1 || check_if_all_ate(philos) == 1)
			break ;
	return (pointer);
}