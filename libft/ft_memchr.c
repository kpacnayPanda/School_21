/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosette <mrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:21:51 by mrosette          #+#    #+#             */
/*   Updated: 2020/11/02 11:36:24 by mrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	elem;

	str = (unsigned char *)s;
	elem = (unsigned char)c;

	while (n > 0)
	{
		if (*str == elem)
		{
			return ((void *)str);
		}
		str++;
		n--;
	}
	return (NULL);
}
