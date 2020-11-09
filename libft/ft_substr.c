/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosette <mrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:01:29 by mrosette          #+#    #+#             */
/*   Updated: 2020/11/02 16:56:45 by mrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*substr;
	int					i;
	int					j;
	unsigned int		slen;

	if (!s)
		return (0);
	substr = (char*)malloc(len * sizeof(char) + 1);
	slen = ft_strlen(s);
	if (substr == NULL)
		return (NULL);
	if (start >= slen)
	{
		substr[0] = '\0';
		return (substr);
	}
	i = 0;
	j = start;
	while (s[j] != '\0' && len-- > 0)
	{
		substr[i++] = s[j++];
	}
	substr[i] = '\0';
	return (substr);
}
