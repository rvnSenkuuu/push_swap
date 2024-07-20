/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:11:14 by tkara2            #+#    #+#             */
/*   Updated: 2024/07/15 13:21:37 by tkara2           ###   ########.fr       */
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
	new_node->index = -1;
	return (new_node);
}

static void	stack_add_back(t_stack **stack, t_stack *new_node)
{
	t_stack	*last;

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
		return (EXIT_SUCCESS);
	while (arg[i])
	{
		stack_add_back(stack_a, create_new_node(ft_atoi(arg[i])));
		i++;
	}
	set_stack_index(stack_a);
	free_ptrs((void **)arg);
	return (EXIT_FAILURE);
}

int	create_stack(t_stack **stack_a, int argc, char **argv)
{
	int		i;
	t_stack	*node;

	i = 0;
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		i = 1;
	while (argv[i])
	{
		node = create_new_node(ft_atoi(argv[i]));
		stack_add_back(stack_a, node);
		i++;
	}
	set_stack_index(stack_a);
	if (argc == 2)
		free_ptrs((void **)argv);
	return (EXIT_SUCCESS);
}
