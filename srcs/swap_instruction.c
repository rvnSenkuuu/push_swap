/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_instruction.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:39:53 by tkara2            #+#    #+#             */
/*   Updated: 2024/07/13 19:59:48 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_stack **stack_a)
{
	int		tmp_value;
	t_stack *tmp;

	if (!stack_a || !*stack_a)
		return ;
	tmp = (*stack_a)->next;
	tmp_value = (*stack_a)->value;
	(*stack_a)->value = tmp->value;
	tmp->value = tmp_value;
	ft_putendl_fd("sa", STDOUT_FILENO);
}

void	sb(t_stack **stack_b)
{
	int		tmp_value;
	t_stack	*tmp;

	if (!stack_b || !*stack_b)
		return ;
	tmp = (*stack_b)->next;
	tmp_value = (*stack_b)->value;
	(*stack_b)->value = tmp->value;
	tmp->value = tmp_value;
	ft_putendl_fd("sb", STDOUT_FILENO);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_putendl_fd("ss", STDOUT_FILENO);
}
