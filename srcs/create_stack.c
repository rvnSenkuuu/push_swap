/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:11:14 by tkara2            #+#    #+#             */
/*   Updated: 2024/07/13 20:54:10 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static t_stack	*create_new_node(int value)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->next = NULL;
	return (new_node);
}

t_stack	*get_last_node(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while ((stack)->next != NULL)
		stack = (stack)->next;
	return (stack);
}

static void	stack_add_back(t_stack **stack, t_stack *new_node)
{
	t_stack	*last;

	if (!stack || !new_node)
		return ;
	if (*stack)
	{
		last = get_last_node(*stack);
		last->next = new_node;
	}
	else
		*stack = new_node;
}

int	create_stack_split(t_stack **stack_a, char *argv)
{
	size_t	i;
	char	**arg;

	i = 0;
	arg = ft_split(argv, ' ');
	if (!arg)
		return (EXIT_FAILURE);
	while (arg[i])
	{
		stack_add_back(stack_a, create_new_node(ft_atoi(arg[i])));
		i++;
	}
	free_ptrs((void **)arg);
	return (EXIT_SUCCESS);
}

int	create_stack(t_stack **stack_a, int argc, char **argv)
{
	size_t	i;

	i = 1;
	while (i < argc)
	{
		stack_add_back(stack_a, create_new_node(ft_atoi(argv[i])));
		i++;
	}
	free_ptrs((void **)argv);
	return (EXIT_SUCCESS);
}
