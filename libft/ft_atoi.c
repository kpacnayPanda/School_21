/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosette <mrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:06:53 by mrosette          #+#    #+#             */
/*   Updated: 2020/11/17 15:04:49 by mrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isspace(char c)
{
	c = (unsigned char)c;
	if (c == '\t' || c == '\n' || c == '\v'
	|| c == '\f' || c == '\r' || c == ' ')
	{
		return (1);
	}
	return (0);
}

int			ft_atoi(const char *str)
{
	unsigned long	result;
	unsigned long	edge;
	size_t			i;
	int				minus;

	result = 0;
	edge = (unsigned long)(2147483647 / 10);
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	minus = (str[i] == '-') ? -1 : 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((result > edge || (result == edge && (str[i] - '0') > 7))
		&& minus == 1)
			return (-1);
		else if ((result > edge || (result == edge && (str[i] - '0') > 8))
			&& minus == -1)
			return (0);
		result = result * 10 + (str[i++] - '0');
	}
	return ((int)(result * minus));
}
