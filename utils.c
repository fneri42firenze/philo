#include "philosopher.h"

size_t	get_current_time(void)
{
	struct timeval	time;

	if (gettimeofday(&time, NULL) == -1)
		write(2, "gettimeofday() error\n", 22);
	return (time.tv_sec * 1000 + time.tv_usec / 1000);
}

void	mutex_destroy(char *error, t_program *program, pthread_mutex_t *forks)
{
	int	i;

	i = 0;
	if (error)
	{
		write(2, error, ft_strlen(error));
		write(2, "\n", 1);
	}
	pthread_mutex_destroy(&program->lock_write);
	pthread_mutex_destroy(&program->lock_meal);
	pthread_mutex_destroy(&program->lock_dead);
	while (i < program->philos[0].num_of_philos)
	{
		pthread_mutex_destroy(&forks[i]);
		i++;
	}
}

// Improved version of sleep function

int	ft_usleep(size_t milliseconds)
{
	size_t	start;

	start = get_current_time();
	while ((get_current_time() - start) < milliseconds)
		usleep(500);
	return (0);
}