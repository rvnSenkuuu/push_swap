/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_instruction.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 13:09:04 by tkara2            #+#    #+#             */
/*   Updated: 2024/07/14 15:33:00 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static t_stack	*get_prelast_node(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next->next)
		stack = stack->next;
	return (stack);
}

void	rra(t_stack **stack_a)
{
	t_stack	*prelast;
	t_stack	*last;

	if (!stack_a || !*stack_a)
		return ;
	prelast = get_prelast_node(*stack_a);
	last = get_last_node(*stack_a);
	last->next = *stack_a;
	prelast->next = NULL;
	*stack_a = last;
	ft_putendl_fd("rra", STDOUT_FILENO);
}

void	rrb(t_stack **stack_b)
{
	t_stack	*prelast;
	t_stack	*last;

	if (!stack_b || !*stack_b)
		return ;
	prelast = get_prelast_node(*stack_b);
	last = get_last_node(*stack_b);
	last->next = *stack_b;
	prelast->next = NULL;
	*stack_b = last;
	ft_putendl_fd("rrb", STDOUT_FILENO);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	ft_putendl_fd("rrr", STDOUT_FILENO);
}
