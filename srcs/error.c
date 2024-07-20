/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:59:14 by tkara2            #+#    #+#             */
/*   Updated: 2024/07/15 10:24:32 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	put_error(char *error_str)
{
	write(STDERR_FILENO, error_str, ft_strlen(error_str));
	exit(EXIT_FAILURE);
}
