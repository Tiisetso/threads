/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 14:02:08 by timurray          #+#    #+#             */
/*   Updated: 2025/12/09 17:57:06 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <limits.h>
# include <pthread.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/time.h>
# include <unistd.h>

typedef struct s_table
{
	unsigned int	number_of_philosophers;
	uint32_t		time_to_die;
	uint32_t		time_to_eat;
	uint32_t		time_to_sleep;
	unsigned int	rounds;
}					t_table;

#endif

/*
TOOLS for this project
malloc -------------- Allocates memory on the heap.
free ---------------- Frees previously allocated memory.

write --------------- Low-level write to a file descriptor.
usleep -------------- Sleep for microseconds.

gettimeofday -------- Get current time with microsecond precision.

pthread_create ------ Creates a new thread.
pthread_detach ------ Detaches a thread.
pthread_join -------- Waits for a thread to finish.
pthread_mutex_init -- Initializes a mutex.
pthread_mutex_destroy- Destroys a mutex.
pthread_mutex_lock -- Locks a mutex.
pthread_mutex_unlock- Unlocks a mutex.



 */