/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosette <mrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:32:49 by mrosette          #+#    #+#             */
/*   Updated: 2020/11/02 15:45:41 by mrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*param;
	size_t	fullsize;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}

	fullsize = count * size;
	param = malloc(fullsize);
	if (param)
	{
		ft_bzero(param, fullsize);
	}
	return (param);
}
