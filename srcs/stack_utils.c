/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 22:20:35 by tkara2            #+#    #+#             */
/*   Updated: 2024/07/13 22:51:27 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*get_last_node(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while ((stack)->next != NULL)
		stack = (stack)->next;
	return (stack);
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

void	set_stack_index(t_stack *stack)
{
	t_stack	*tmp;
	int		i;
	int		min_value;

	i = 1;
	tmp = stack;
	min_value = get_min_value(stack);
	while (tmp)
	{
		if (tmp->value == min_value)
		{
			tmp->index = i;
			i++;
			min_value = get_next_value(stack, min_value);
			tmp = stack;
		}
		else
			tmp = tmp->next;
	}
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
