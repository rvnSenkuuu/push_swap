/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 12:41:04 by tkara2            #+#    #+#             */
/*   Updated: 2024/06/30 22:45:20 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/libft.h"

static	int	ft_isspace(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r' ));
}

long	ft_atol(const char *nptr)
{
	int		i;
	int		sign;
	long	res;
	char	*str;

	i = 0;
	res = 0;
	sign = 1;
	str = (char *)nptr;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -sign;
	while (ft_isdigit(str[i]))
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
