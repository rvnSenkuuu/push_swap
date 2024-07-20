/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 13:39:16 by tkara2            #+#    #+#             */
/*   Updated: 2024/07/15 13:15:05 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_stack_sorted(t_stack *stack)
{
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (EXIT_SUCCESS);
		stack = stack->next;
	}
	return (EXIT_FAILURE);
}

int	get_min_value(t_stack *stack)
{
	t_stack	*tmp;
	int		min_value;

	if (!stack)
		return (0);
	tmp = stack;
	min_value = tmp->value;
	while (tmp)
	{
		if (tmp->value < min_value)
			min_value = tmp->value;
		tmp = tmp->next;
	}
	return (min_value);
}

int	get_min_index(t_stack *stack)
{
	t_stack	*tmp;
	int		min_index;

	if (!stack)
		return (0);
	tmp = stack;
	min_index = tmp->index;
	while (tmp)
	{
		if (tmp->index < min_index)
			min_index = tmp->index;
		tmp = tmp->next;
	}
	return (min_index);
}

int	get_next_value(t_stack *stack, int min_value)
{
	t_stack	*tmp;
	int		next_value;

	tmp = stack;
	next_value = INT_MAX;
	while (tmp)
	{
		if (tmp->value > min_value && tmp->value < next_value)
			next_value = tmp->value;
		tmp = tmp->next;
	}
	return (next_value);
}
