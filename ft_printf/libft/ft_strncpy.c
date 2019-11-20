/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:06:44 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:06:46 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;
	size_t j;

	i = -1;
	j = ft_strlen(src);
	while (++i < len)
		if (j > i)
			dst[i] = src[i];
		else
			(dst[i] = '\0');
	return (dst);
}
