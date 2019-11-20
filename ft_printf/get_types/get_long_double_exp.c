/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_long_double_exp.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:29:08 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:29:12 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*get_long_double_exp(long double arg, unsigned int precision)
{
	int		exp;
	char	*ret;
	int		sign;

	if ((ret = get_const_double(arg)) != NULL)
		return (ret);
	exp = 0;
	sign = (arg >= 0.0) ? (1) : (-1);
	arg *= sign;
	if (arg >= 10.0)
		while (arg >= 10.0)
		{
			arg /= 10.0;
			exp++;
		}
	else if (arg != 0.0)
		while (arg < 1)
		{
			arg *= 10.0;
			exp--;
		}
	arg *= sign;
	ret = get_long_double(arg, precision);
	add_exp(&ret, exp, precision);
	return (ret);
}
