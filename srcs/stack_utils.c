/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 22:20:35 by tkara2            #+#    #+#             */
/*   Updated: 2024/07/15 14:16:03 by tkara2           ###   ########.fr       */
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

int	get_stack_size(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

static t_stack	*get_min_node(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*min_node;
	int		verif;

	min_node = NULL;
	verif = 0;
	tmp = *stack;
	while (tmp)
	{
		if ((tmp->index == -1) && (verif == 0 || tmp->value < min_node->value))
		{
			min_node = tmp;
			verif = 1;
		}
		tmp = tmp->next;
	}
	return (min_node);
}

void	set_stack_index(t_stack **stack)
{
	t_stack	*tmp;
	int		index;

	index = 0;
	tmp = get_min_node(stack);
	while (tmp)
	{
		tmp->index = index++;
		tmp = get_min_node(stack);
	}
}
