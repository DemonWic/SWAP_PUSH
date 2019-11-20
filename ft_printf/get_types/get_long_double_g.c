/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_long_double_g.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:29:59 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:30:01 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*get_long_double_g(long double arg, unsigned int precision)
{
	char *ret;

	if ((ret = get_const_double(arg)) != NULL)
		return (ret);
	if (is_exp(arg, precision))
		ret = handle_exp(arg, precision);
	else
		ret = handle_float(arg, precision);
	return (ret);
}
