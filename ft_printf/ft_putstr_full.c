/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_full.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:24:12 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:24:14 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_full(const char *str)
{
	size_t len;

	if (str == NULL)
		return ;
	len = ft_strlen(str);
	g_output_symbols += len;
	write(1, str, len);
}
