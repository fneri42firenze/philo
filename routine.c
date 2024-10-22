/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:31:20 by fneri             #+#    #+#             */
/*   Updated: 2024/10/22 16:29:14 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	think(t_philo *philo)
{
	if (philo->num_of_philos % 2 != 0)
		ft_usleep(5);
	print_message("is thinking", philo, philo->philo_id);
}

void	dream(t_philo *philo)
{
	print_message("is sleeping", philo, philo->philo_id);
	ft_usleep(philo->time_to_sleep);
}

void	eat_last(t_philo *philo)
{
	pthread_mutex_lock(philo->left_fork);
	print_message("has taken a fork", philo, philo->philo_id);
	if (philo->num_of_philos == 1)
	{
		ft_usleep(philo->time_to_die);
		pthread_mutex_unlock(philo->right_fork);
		return ;
	}
	pthread_mutex_lock(philo->right_fork);
	print_message("has taken a fork", philo, philo->philo_id);
	philo->who_eating = 1;
	print_message("is eating", philo, philo->philo_id);
	pthread_mutex_lock(philo->lock_meal);
	philo->last_meal = get_current_time();
	philo->meals_eaten++;
	pthread_mutex_unlock(philo->lock_meal);
	ft_usleep(philo->time_to_eat);
	philo->who_eating = 0;
	pthread_mutex_unlock(philo->left_fork);
	pthread_mutex_unlock(philo->right_fork);
}

void	eat_normal(t_philo *philo)
{
	pthread_mutex_lock(philo->right_fork);
	print_message("has taken a fork", philo, philo->philo_id);
	if (philo->num_of_philos == 1)
	{
		ft_usleep(philo->time_to_die);
		pthread_mutex_unlock(philo->right_fork);
		return ;
	}
	pthread_mutex_lock(philo->left_fork);
	print_message("has taken a fork", philo, philo->philo_id);
	philo->who_eating = 1;
	print_message("is eating", philo, philo->philo_id);
	pthread_mutex_lock(philo->lock_meal);
	philo->last_meal = get_current_time();
	philo->meals_eaten++;
	pthread_mutex_unlock(philo->lock_meal);
	ft_usleep(philo->time_to_eat);
	philo->who_eating = 0;
	pthread_mutex_unlock(philo->left_fork);
	pthread_mutex_unlock(philo->right_fork);
}

void	eat(t_philo *philo)
{
	if (philo->philo_id == philo->num_of_philos - 1)
		eat_last(philo);
	else
		eat_normal(philo);
}
