/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:31:16 by tkara2            #+#    #+#             */
/*   Updated: 2024/06/16 23:34:30 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 2 || (argc == 2 && !argv[1][0]))
		ft_error();
	else if (argc == 2)
		//TODO: Different split ?? argv = ft_split(argv[1], ' ');
	//TODO: init_stack(&stack_a, argv + 1);
	if (!stack_is_sorted(&stack_a)) // Does is work?
	{
		if (stack_len(&stack_a) == 2)
			//TODO: inst_sa(&stack_a);
		else if (stack_len(&stack_a) == 3)
			//TODO: sort_three(&stack_a);
		else
			//TODO:turk_sort(&stack_a, &stack_b);
	}
	free_stack(&stack_a); // Does is work?
	return (EXIT_SUCCESS);
}
