/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_double.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:26:26 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:26:28 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

char			*get_double(double arg, unsigned int precision)
{
	long double	frac_part;
	long double	int_part;
	char		*ret;
	long		sign;

	if ((ret = get_const_double(arg)) != NULL)
		return (ret);
	frac_part = get_fraction(arg);
	int_part = (arg >= 0) ? (arg - frac_part) : (arg + frac_part);
	ft_round(&int_part, &frac_part, precision);
	sign = sign_double(arg);
	ret = get_integer_str(int_part, sign);
	if (precision != 0)
		get_fraction_str(frac_part, precision, &ret);
	return (ret);
}
