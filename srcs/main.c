/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:43:36 by tkara2            #+#    #+#             */
/*   Updated: 2024/07/12 13:38:55 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc == 1)
		return (EXIT_SUCCESS);
	if (check_input(argc, argv))
		put_error(ERROR_MESSAGE);
	stack_a = NULL;
	stack_b = NULL;
	if (argc == 2)
		if (!create_stack_split(&stack_a, argv[1]))
			put_error(ERROR_CREATE);
	else
		create_stack(&stack_a, argc, argv);
	if (!check_duplication(&stack_a))
	{
		destroy_stack(&stack_a);
		destroy_stack(&stack_b);
		put_error(ERROR_MESSAGE);
	}
	sort_stack(&stack_a, &stack_b);
	destroy_stack(&stack_a);
	destroy_stack(&stack_b);
	return (EXIT_SUCCESS);
}
