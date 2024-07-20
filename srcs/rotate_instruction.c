/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_instruction.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:01:39 by tkara2            #+#    #+#             */
/*   Updated: 2024/07/14 15:32:49 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ra(t_stack **stack_a)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack_a || !*stack_a)
		return ;
	first = *stack_a;
	*stack_a = (*stack_a)->next;
	last = get_last_node(*stack_a);
	first->next = NULL;
	last->next = first;
	ft_putendl_fd("ra", STDOUT_FILENO);
}

void	rb(t_stack **stack_b)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack_b || !*stack_b)
		return ;
	first = *stack_b;
	*stack_b = (*stack_b)->next;
	last = get_last_node(*stack_b);
	first->next = NULL;
	last->next = first;
	ft_putendl_fd("ra", STDOUT_FILENO);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	ft_putendl_fd("rr", STDERR_FILENO);
}
