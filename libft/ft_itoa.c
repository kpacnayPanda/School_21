/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosette <mrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:35:15 by mrosette          #+#    #+#             */
/*   Updated: 2020/11/09 15:40:33 by mrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*negative_itoa(int n)
{
	char	*res;
	long	num;
	long	num2;
	int		len;

	num = (long)n;
	num2 = (long)n;
	len = 1;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	res = (char*)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[len--] = '\0';
	num2 = num2 * (-1);
	while (len >= 1)
	{
		res[len--] = (num2 % 10) + '0';
		num2 = num2 / 10;
	}
	res[len] = '-';
	return (res);
}

char	*num_zero(int n)
{
	int		len;
	char	*res;

	len = 2;
	n--;
	res = (char*)malloc((len) * sizeof(char));
	if (!res)
		return (NULL);
	len--;
	res[len] = '\0';
	len--;
	res[len] = '0';
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	long	num;

	num = (long)n;
	len = 0;
	if (n < 0)
		return (negative_itoa(n));
	if (n == 0)
		return (num_zero(n));
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	res = (char*)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[len--] = '\0';
	while (len >= 0)
	{
		res[len--] = (n % 10) + '0';
		n = n / 10;
	}
	return (res);
}
