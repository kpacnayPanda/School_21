/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosette <mrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:30:36 by mrosette          #+#    #+#             */
/*   Updated: 2020/11/17 14:41:50 by mrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dest;
	unsigned char *source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (!dest && !source)
		return (NULL);
	if (dest >= source)
	{
		dest = dest + len;
		source = source + len;
		while (len--)
		{
			*--dest = *--source;
		}
		return (dest);
	}
	else
	{
		while (len--)
			*dest++ = *source++;
	}
	return (dst);
}
