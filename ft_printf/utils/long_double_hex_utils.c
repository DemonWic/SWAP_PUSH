/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_double_hex_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:39:09 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:39:11 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*add_comma(char **mantissa)
{
	int		len;
	char	*ret;
	int		i;
	int		j;

	len = ft_strlen(*mantissa);
	ret = ft_strnew(len + 1);
	i = 0;
	j = 0;
	while (i < len)
	{
		if (j == 1)
		{
			ret[j] = '.';
			j++;
			continue ;
		}
		ret[j] = (*mantissa)[i];
		j++;
		i++;
	}
	ft_strdel(mantissa);
	return (ret);
}
