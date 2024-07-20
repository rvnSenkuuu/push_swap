/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:43:36 by tkara2            #+#    #+#             */
/*   Updated: 2024/07/15 15:10:25 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc == 1 || (argc == 2 && !argv[1][0]))
		put_error(ERROR_MESSAGE);
	if (check_args(argc, argv) == EXIT_FAILURE)
		put_error(ERROR_MESSAGE);
	stack_a = NULL;
	stack_b = NULL;
	create_stack(&stack_a, argc, argv);
	if (check_stack_sorted(stack_a))
	{
		destroy_stack(&stack_a);
		destroy_stack(&stack_b);
		return (EXIT_SUCCESS);
	}
	sort_stack(&stack_a, &stack_b);
	destroy_stack(&stack_a);
	destroy_stack(&stack_b);
	return (EXIT_SUCCESS);
}
