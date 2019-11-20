/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_hex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:28:10 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:28:12 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*get_unsigned_char_hex(const void *arg)
{
	const unsigned char *value = arg;

	return (ulltohex(*value));
}

char	*get_unsigned_short_hex(const void *arg)
{
	const unsigned short *value = arg;

	return (ulltohex(*value));
}

char	*get_unsigned_int_hex(const void *arg)
{
	const unsigned int *value = arg;

	return (ulltohex(*value));
}

char	*get_unsigned_long_hex(const void *arg)
{
	const unsigned long *value = arg;

	return (ulltohex(*value));
}

char	*get_unsigned_long_long_hex(const void *arg)
{
	const unsigned long long *value = arg;

	return (ulltohex(*value));
}
