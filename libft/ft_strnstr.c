/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosette <mrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:50:57 by mrosette          #+#    #+#             */
/*   Updated: 2020/11/19 19:22:53 by mrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *st, const char *need, size_t len)
{
	int i;
	int j;
	int flag;

	i = 0;
	j = 0;
	flag = 0;
	if (ft_strlen(need) == 0)
		return ((char *)&st[0]);
	while (len != 0 && st[i] != '\0')
	{
		if (st[i] != need[j])
			j = 0;
		if (st[i] == need[j])
			j++;
		if (need[j] == '\0')
			return ((char *)&st[i - j + 1]);
		len--;
		i++;
	}
	return (NULL);
}
