/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosette <mrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:06:53 by mrosette          #+#    #+#             */
/*   Updated: 2020/10/31 16:05:52 by mrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		checkofrminus(const char *str, int i)
{
	int minus;

	minus = 1;

	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			minus = -minus;
		i++;
	}
	return (minus);
}

int		checkforlength(const char *str, int i, int minus)
{
	int len;

	len = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		len++;
		i++;
	}

	if (len >= 11 && minus == -1)
	{
		return (1);
	}
	if (len >= 11 && minus == 1)
	{
		return (2);
	}
	return (0);
}

int		findres(const char *str, int i, int res, int minus)
{
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = 10 * res + (str[i] - '0');
		i++;
	}
	return (res * minus);
}

int		ft_atoi(const char *str)
{
	int res;
	int i;
	int minus;
	int check;

	res = 0;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
	|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
	{
		i++;
	}
	minus = checkofrminus(str, i);
	while ((str[i] == '-') || (str[i] == '+'))
		i++;

	check = checkforlength(str, i, minus);
	if (check == 2)
		return (-1);
	if (check == 1)
		return (0);
	return (findres(str, i, res, minus));
}
