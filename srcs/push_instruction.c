/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_instruction.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:48:24 by tkara2            #+#    #+#             */
/*   Updated: 2024/07/12 12:00:45 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*node;

	if (!stack_a || !*stack_a || !stack_b || !*stack_b)
		return ;
	node = *stack_b;
	node->next = *stack_a;
	*stack_a = node;
	ft_putendl_fd("pa", STDOUT_FILENO);
}
void	pb(t_stack **stack_b, t_stack **stack_a)
{
	t_stack	*node;

	if (!stack_a || !*stack_a || !stack_b || !*stack_b)
		return ;
	node = *stack_a;
	node->next = *stack_b;
	*stack_b = node;
	ft_putendl_fd("pb", STDOUT_FILENO);
}
