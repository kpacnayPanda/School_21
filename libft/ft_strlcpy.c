/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosette <mrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:08:36 by mrosette          #+#    #+#             */
/*   Updated: 2020/11/10 16:16:15 by mrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, char *str, size_t size)
{
	size_t len;
	size_t i;

	if (!str)
	{
		return (0);
	}
	len = ft_strlen(str);
	i = 0;
	if (size == 0)
	{
		return (len);
	}
	while (str[i] != '\0' && i < size - 1)
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
