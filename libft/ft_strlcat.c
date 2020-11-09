/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosette <mrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:19:36 by mrosette          #+#    #+#             */
/*   Updated: 2020/11/02 15:26:43 by mrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dstlen;
	size_t fullsize;
	size_t srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen < size)
		fullsize = dstlen + srclen;
	else
		fullsize = size + srclen;
	if (!(size <= dstlen))
	{
		dst = dst + dstlen;
		size = size - dstlen;
		while (*src && size-- > 1)
		{
			*dst = *src;
			dst++;
			src++;
		}
		*dst = '\0';
	}
	return (fullsize);
}
