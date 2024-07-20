/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 22:52:21 by tkara2            #+#    #+#             */
/*   Updated: 2024/07/14 15:32:40 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_max_bits(t_stack **stack_a)
{
	t_stack	*tmp;
	int		max_index;
	int		max_bits;

	tmp = *stack_a;
	max_index = tmp->index;
	max_bits = 0;
	while (tmp)
	{
		if (tmp->index > max_index)
			max_index = tmp->index;
		tmp = tmp->next;
	}
	while ((max_index >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	tmp = *stack_a;
	i = 0;
	size = get_stack_size(*stack_a);
	max_bits = get_max_bits(stack_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			tmp = *stack_a;
			if (((tmp->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_b, stack_a);
		}
		while (get_stack_size(*stack_b) != 0)
			pa(stack_a, stack_b);
		i++;
	}
}
