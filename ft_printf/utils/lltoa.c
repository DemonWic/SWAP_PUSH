/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lltoa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:38:57 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:39:00 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_intlen(long long n)
{
	size_t		ret;
	long long	num;

	ret = 0;
	num = n;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num *= -1;
		ret++;
	}
	while (num > 0)
	{
		ret++;
		num = num / 10;
	}
	return (ret);
}

char			*ft_lltoa(long long n)
{
	long		len;
	char		*ret;
	long long	num;

	len = ft_intlen(n);
	CH_NULL(ret = ft_strnew(len + 2));
	if (n == MIN(n))
		return (min_integer(sizeof(n)));
	ret[len--] = '\0';
	num = n;
	if (n < 0)
	{
		ret[0] = '-';
		num *= -1;
		len--;
	}
	while (len >= 0)
	{
		ret[(n < 0) ? (len + 1) : len] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (ret);
}
