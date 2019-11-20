/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_signed.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:31:51 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:31:54 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*get_signed_char(const void *arg)
{
	const char *value = arg;

	return (ft_lltoa(*value));
}

char	*get_short(const void *arg)
{
	const short *value = arg;

	return (ft_lltoa(*value));
}

char	*get_int(const void *arg)
{
	const int *value = arg;

	return (ft_lltoa(*value));
}

char	*get_long(const void *arg)
{
	const long *value = arg;

	return (ft_lltoa(*value));
}

char	*get_long_long(const void *arg)
{
	const long long *value = arg;

	return (ft_lltoa(*value));
}
