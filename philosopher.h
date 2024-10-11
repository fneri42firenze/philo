/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:20:42 by fneri             #+#    #+#             */
/*   Updated: 2024/09/10 19:43:58 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHER_H
# define PHILOSOPHER_H
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <pthread.h>
# include <sys/time.h>
# include <printf.h>
# include "libft/libft.h"
# include <sys/time.h>

# define PHILO_MAX 300

typedef struct s_philo
{
	pthread_t		thread;
	int				philo_id;
	int				who_eating;
	int				meals_eaten;
	size_t			last_meal;
	size_t			time_to_die;
	size_t			time_to_eat;
	size_t			time_to_sleep;
	size_t			start_time;
	int				num_of_philos;
	int				num_times_to_eat;
	int				*dead;
	pthread_mutex_t	*right_fork;
	pthread_mutex_t	*left_fork;
	pthread_mutex_t	*lock_write;
	pthread_mutex_t	*lock_dead;
	pthread_mutex_t	*lock_meal;
}					t_philo;

typedef struct s_program
{
	int				dead_flag;
	pthread_mutex_t	lock_dead;
	pthread_mutex_t	lock_meal;
	pthread_mutex_t	lock_write;
	t_philo			*philos;
}					t_program;

int		ft_parsing(int argc, char **argv);
void	init_input(t_philo *philo, char **argv);
void	init_philos(t_philo *philos, t_program *program, pthread_mutex_t *forks,
		char **argv);
void	init_forks(pthread_mutex_t *forks, int philo_num);
void	init_program(t_program *program, t_philo *philos);
size_t	get_current_time(void);
int		ft_usleep(size_t milliseconds);
int		thread_create(t_program *program, pthread_mutex_t *forks);
void	mutex_destroy(char *error, t_program *program, pthread_mutex_t *forks);
int		dead_check(t_philo *philo);
void	eat(t_philo *philo);
void	dream(t_philo *philo);
void	think(t_philo *philo);
void	print_message(char *str, t_philo *philo, int id);
void	*monitor(void *pointer);

#endif