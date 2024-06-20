/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:32:14 by tkara2            #+#    #+#             */
/*   Updated: 2024/06/16 23:35:09 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H 

# include <stdbool.h>
# include "../lib/libft/includes/libft.h"

typedef struct s_stack
{
	bool	cheapest;
	bool	above_median;
	int		value;
	int		index;
	int		push_cost;
	struct s_stack	*target;
	struct s_stack	*next;
	struct s_stack	*prev;
}				t_stack;

void	ft_error(void);
void	init_stack(t_stack *stack, char **argv);
void	stack_three(t_stack *stack);
void	turk_sort(t_stack *stack_a, t_stack *stack_b);
void	free_stack(t_stack *stack);
bool	stack_is_sorted(t_stack *stack);
int		stack_len(t_stack *stack);

#endif 
