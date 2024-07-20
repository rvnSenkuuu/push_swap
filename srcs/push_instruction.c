/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_instruction.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:48:24 by tkara2            #+#    #+#             */
/*   Updated: 2024/07/14 14:38:53 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*first_a;
	t_stack	*first_b;

	if (!stack_a || !*stack_a || !stack_b)
		return ;
	first_a = *stack_a;
	first_b = *stack_b;
	*stack_b = (*stack_b)->next;
	first_b->next = first_a;
	*stack_a = first_b;
	ft_putendl_fd("pa", STDOUT_FILENO);
}

void	pb(t_stack **stack_b, t_stack **stack_a)
{
	t_stack	*first_a;
	t_stack	*first_b;

	if (!stack_a || !*stack_a || !stack_b)
		return ;
	first_a = *stack_a;
	first_b = *stack_b;
	*stack_a = (*stack_a)->next;
	first_a->next = first_b;
	*stack_b = first_a;
	ft_putendl_fd("pb", STDOUT_FILENO);
}
