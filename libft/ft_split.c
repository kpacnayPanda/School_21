/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosette <mrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:56:44 by mrosette          #+#    #+#             */
/*   Updated: 2020/11/23 18:16:52 by mrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		find_all_words(char *s, char c)
{
	int	flag;
	int	res;

	flag = 1;
	res = 0;
	while (*s)
	{
		if (*s == c)
			flag = 1;
		if (flag && *s != c)
		{
			flag = 0;
			res++;
		}
		s++;
	}
	return (res);
}

static char		**ft_free(char **newstr)
{
	unsigned int i;

	i = 0;
	while (newstr[i])
	{
		free(newstr[i]);
		i++;
	}
	free(newstr);
	return (NULL);
}

static void		ft_get_str(char **next_str, unsigned int *strlen,
	char c)
{
	unsigned int i;

	*next_str += *strlen;
	*strlen = 0;
	i = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[i])
	{
		if ((*next_str)[i] == c)
			return ;
		(*strlen)++;
		i++;
	}
}

char			**ft_split(char const *s, char c)
{
	char			**newstr;
	char			*next_str;
	unsigned int	strlen;
	unsigned int	cnum;
	unsigned int	i;

	if (!s)
		return (NULL);
	cnum = find_all_words((char *)s, c);
	if (!(newstr = malloc(sizeof(char *) * (cnum + 1))))
		return (NULL);
	i = 0;
	next_str = (char *)s;
	strlen = 0;
	while (i < cnum)
	{
		ft_get_str(&next_str, &strlen, c);
		if (!(newstr[i] = malloc(sizeof(char) * (strlen + 1))))
			return (ft_free(newstr));
		ft_strlcpy(newstr[i], next_str, strlen + 1);
		i++;
	}
	newstr[i] = NULL;
	return (newstr);
}
