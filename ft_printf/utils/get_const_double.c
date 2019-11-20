/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_const_double.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:38:41 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:38:43 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*get_const_double(double value)
{
	char			*res;
	const double	p_inf = 1.0 / 0.0;
	const double	n_inf = -1.0 / 0.0;

	res = NULL;
	if (value == p_inf)
		CH_NULL(res = ft_strdup("inf"));
	if (value == n_inf)
		CH_NULL(res = ft_strdup("-inf"));
	if (value != value)
		CH_NULL(res = ft_strdup("nan"));
	return (res);
}

char	*get_const_double_upper(double value)
{
	char			*res;
	const double	p_inf = 1.0 / 0.0;
	const double	n_inf = -1.0 / 0.0;

	res = NULL;
	if (value == p_inf)
		CH_NULL(res = ft_strdup("INF"));
	if (value == n_inf)
		CH_NULL(res = ft_strdup("-INF"));
	if (value != value)
		CH_NULL(res = ft_strdup("NAN"));
	return (res);
}
