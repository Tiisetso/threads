/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 14:02:05 by timurray          #+#    #+#             */
/*   Updated: 2025/12/09 18:17:45 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int set_table(char **av, t_table *table)
{
	//convert str to nums
}

int main(int ac, char **av)
{
	t_table table;

	if (ac != 5 || ac != 6)
		return (EXIT_FAILURE);
	else
	{
		set_table(av, &table);
	}	
	printf("Hello philo\n");
	return (EXIT_SUCCESS);
}