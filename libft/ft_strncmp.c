/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosette <mrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:12:25 by mrosette          #+#    #+#             */
/*   Updated: 2020/10/31 16:22:00 by mrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char ss1;
	unsigned char ss2;

	while (n != 0)
	{
		ss1 = (unsigned char)*s1++;
		ss2 = (unsigned char)*s2++;
		if (ss1 != ss2)
		{
			return (ss1 - ss2);
		}
		if (ss1 == '\0')
		{
			return (0);
		}
		n--;
	}
	return (0);
}
