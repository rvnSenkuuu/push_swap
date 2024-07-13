/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 13:39:16 by tkara2            #+#    #+#             */
/*   Updated: 2024/07/12 13:45:11 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_stack_sorted(t_stack *stack)
{
	if (!stack)
		return (EXIT_FAILURE);
	while (stack)
	{
		if (stack->value > stack->next->value)
			return (EXIT_SUCCESS);
		stack = stack->next;
	}
	return (EXIT_FAILURE);
}