/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_hex_upper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:28:19 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:28:21 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*get_unsigned_char_hex_upper(const void *arg)
{
	const unsigned char *value = arg;

	return (ulltohex_upper(*value));
}

char	*get_unsigned_short_hex_upper(const void *arg)
{
	const unsigned short *value = arg;

	return (ulltohex_upper(*value));
}

char	*get_unsigned_int_hex_upper(const void *arg)
{
	const unsigned int *value = arg;

	return (ulltohex_upper(*value));
}

char	*get_unsigned_long_hex_upper(const void *arg)
{
	const unsigned long *value = arg;

	return (ulltohex_upper(*value));
}

char	*get_unsigned_long_long_hex_upper(const void *arg)
{
	const unsigned long long *value = arg;

	return (ulltohex_upper(*value));
}
