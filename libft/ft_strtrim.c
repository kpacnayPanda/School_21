/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosette <mrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:03:54 by mrosette          #+#    #+#             */
/*   Updated: 2020/11/05 18:05:35 by mrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	char	*start;
	char	*end;
	char	*init;

	if (!s1)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	start = (char*)s1;
	while (*s1)
		s1++;
	s1--;
	while (s1 > start && ft_strchr(set, *s1))
		s1--;
	end = (char*)s1;
	newstr = (char*)malloc((end - start + 2) * sizeof(char));
	if (!newstr)
		return (NULL);
	init = newstr;
	while (start <= end)
		*init++ = *start++;
	*init = '\0';
	return (newstr);
}
