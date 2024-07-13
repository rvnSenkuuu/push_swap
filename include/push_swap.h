/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:45:01 by tkara2            #+#    #+#             */
/*   Updated: 2024/07/13 20:55:59 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/libft/includes/libft.h"
# include <limits.h>

# define ERROR_MESSAGE "Error\n"
# define ERROR_CREATE "Failed to create stack\n"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}			t_stack;

void	free_ptrs(void **ptrs);
void	destroy_stack(t_stack **stack);
void	put_error(char *error_str);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_b, t_stack **stack_a);
void	ra(t_stack **stack_a);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
int		check_input(int argc, char **argv);
int		check_duplication(t_stack **stack);
int		check_stack_sorted(t_stack *stack);
int		create_stack_split(t_stack **stack_a, char *argv);
int		create_stack(t_stack **stack_a, int argc, char **argv);
t_stack	*get_last_node(t_stack *stack);

#endif
