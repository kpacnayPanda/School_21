/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosette <mrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:56:44 by mrosette          #+#    #+#             */
/*   Updated: 2020/11/09 14:27:34 by mrosette         ###   ########.fr       */
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

static char	*find_word(char *word, char c)
{
	char	*res;
	int		i;

	i = 0;
	res = word;
	while (word[i] && word[i] != c)
	{
		i++;
	}
	word[i] = '\0';
	return (ft_strdup(res));
}

static void	free_s2(char **s2, int i)
{
	while (i > 0)
	{
		if (s2 && *s2)
		{
			free(*s2);
			*s2 = NULL;
		}
	}
}

static char	**fill_array(char **s2, char *s, char c, int cnum)
{
	int		i;
	int		j;
	char	*word;

	i = 0;
	j = 0;

	while (i < cnum)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			if (!(word = find_word(s, c)))
			{
				free_s2(s2, i);
				return (NULL);
			}
			s2[i] = word;
			s = s + ft_strlen(word) + 1;
		}
		i++;
	}
	s2[i] = NULL;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	int		cnum;
	char	**s2;

	if (!s || !(s = ft_strdup((char*)s)))
		return (NULL);
	cnum = find_all_words((char*)s, c);
	s2 = (char**)malloc((cnum + 1) * sizeof(char*));
	s2 = fill_array(s2, (char*)s, c, cnum);
	return (s2);
}
