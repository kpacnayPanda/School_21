/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosette <mrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:42:21 by mrosette          #+#    #+#             */
/*   Updated: 2020/10/31 18:29:31 by mrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;
	unsigned char	f;

	i = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	f = (unsigned char)c;

	while (i < n)
	{
		if ((*dest++ = *source++) == f)
			return ((void*)dest);
		i++;
	}
	return (NULL);
}
