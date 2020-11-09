/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosette <mrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:22:29 by mrosette          #+#    #+#             */
/*   Updated: 2020/10/31 16:35:42 by mrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (1)
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		if (s[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
}