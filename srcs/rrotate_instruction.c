/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_instruction.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 13:09:04 by tkara2            #+#    #+#             */
/*   Updated: 2024/07/12 13:23:33 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rra(t_stack **stack_a)
{
	t_stack	*last;

	if (!stack_a || !*stack_a)
		return ;
	last = get_last_node(stack_a);
	last->next = *stack_a;
	(*stack_a) = last;
	ft_putendl_fd("rra", STDOUT_FILENO);
}
void	rrb(t_stack **stack_b)
{
	t_stack	*last;

	if (!stack_b || !*stack_b)
		return ;
	last = get_last_node(stack_b);
	last->next = *stack_b;
	(*stack_b) = last;
	ft_putendl_fd("rrb", STDOUT_FILENO);
}
void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	ft_putendl_fd("rrr", STDOUT_FILENO);
}
