/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_long_double_g_upper.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:30:08 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:30:10 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*get_long_double_g_upper(long double arg, unsigned int precision)
{
	char *ret;

	if ((ret = get_const_double_upper(arg)) != NULL)
		return (ret);
	if (is_exp(arg, precision))
		ret = handle_exp_upper(arg, precision);
	else
		ret = handle_float(arg, precision);
	return (ret);
}
