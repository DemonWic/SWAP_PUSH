/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_double_g_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:27:18 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:27:20 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*get_double_g_upper(double arg, unsigned int precision)
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
