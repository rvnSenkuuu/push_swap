/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:21:26 by tkara2            #+#    #+#             */
/*   Updated: 2024/07/15 14:20:59 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	duplicate_arg(int value, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == value)
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}

static int	valid_arg(char *arg)
{
	int	i;

	i = 0;
	if (arg[0] == '-')
		i++;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
			return (EXIT_SUCCESS);
		i++;
	}
	return (EXIT_FAILURE);
}

int	check_args(int argc, char **argv)
{
	int		i;
	long	value;

	i = 0;
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		i = 1;
	while (argv[i])
	{
		value = ft_atol(argv[i]);
		if (!valid_arg(argv[i]))
			return (EXIT_FAILURE);
		if (duplicate_arg(value, argv, i))
			return (EXIT_FAILURE);
		if (value < INT_MIN || value > INT_MAX)
			return (EXIT_FAILURE);
		i++;
	}
	if (argc == 2)
		free_ptrs((void **)argv);
	return (EXIT_SUCCESS);
}
