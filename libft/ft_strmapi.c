/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosette <mrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:20:38 by mrosette          #+#    #+#             */
/*   Updated: 2020/11/09 16:48:40 by mrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	int				len;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	res = (char*)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (f == NULL)
	{
		res = (char*)s;
		return (res);
	}
	while (s[i] != '\0')
	{
		if (!(res[i] = f(i, s[i])))
			return (NULL);
		i++;
	}
	res[i] = '\0';
	return (res);
}
