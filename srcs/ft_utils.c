/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 19:11:06 by tkara2            #+#    #+#             */
/*   Updated: 2024/06/21 00:16:08 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

int	stack_len(t_stack *stack)
{
	int	stack_len;

	if (!stack)
		return (0);
	stack_len = 0;
	while (stack)
	{
		stack_len++;
		stack = stack->next;
	}
	return (stack_len);
}

bool	stack_is_sorted(t_stack *stack)
{
	int	i;
	int	j;
	if (!stack)
		return (false);
	i = 0;
	j = 0;
	while (stack)
	{
		if (stack->value > stack->next->value)
			return (false);
		stack = stack->next;
	}
	return (true);
}
void	free_stack(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack)
		return ;
	tmp = stack;
	while (stack)
	{
		free(tmp);
		tmp = NULL;
		tmp = stack->next;
	}
}
