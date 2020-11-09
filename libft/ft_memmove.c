/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosette <mrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:30:36 by mrosette          #+#    #+#             */
/*   Updated: 2020/11/02 13:06:13 by mrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dest;
	unsigned char *source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;

	if ((size_t)(dest - source) >= len)
	{
		return (ft_memcpy(dest, source, len));
	}
	if (dest > source)
	{
		dest = dest + (len - 1);
		source = source + (len - 1);
		while (len--)
		{
			*dest-- = *source--;
		}
		return (dest);
	}
	return (dest);
}
