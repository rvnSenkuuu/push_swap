/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:16:50 by tkara2            #+#    #+#             */
/*   Updated: 2024/07/11 16:54:50 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	valid_number(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] == '-' || arg[i] == ' ' || arg[i] == '+')
			i++;
		if (!ft_isdigit(arg[i]))
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}
static int	args_already_splitted(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (valid_number(argv[i]))
			return (EXIT_FAILURE);
		if (ft_atoi(argv[i]) < INT_MIN || ft_atoi(argv[i]) > INT_MAX)
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}
static int	args_not_splitted(char *argv)
{
	int		i;
	char	**arg;

	arg = ft_split(argv[1], ' ');
	i = 0;
	while (arg[i])
	{
		if (valid_number(arg[i]))
			return (free_ptrs((void **)arg), EXIT_FAILURE);
		if (ft_atoi(arg[i]) < INT_MIN || ft_atoi(arg[i]) > INT_MAX)
			return (free_ptrs((void **)arg), EXIT_FAILURE);
		i++;
	}
	free_ptrs((void **)arg);
	return (EXIT_SUCCESS);
}
int	check_duplication(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack)
		return (EXIT_FAILURE);
	while (stack)
	{
		tmp = *stack;
		while (tmp)
		{
			if (tmp->value == (*stack)->value)
				return (EXIT_FAILURE);
			tmp = tmp->next;
		}
		*stack = (*stack)->next;
	}
	return (EXIT_SUCCESS);
}
int	check_input(int argc, char **argv)
{
	if (argc > 2)
		return (args_already_splitted(argc, argv));
	else if (argc == 2)
		return (args_not_splitted(argv[1]));
	else
		return (EXIT_SUCCESS);
}
