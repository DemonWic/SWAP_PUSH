/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:00:45 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:00:48 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	if (dst > src)
		while (--len + 1 != 0)
			((char *)dst)[len] = ((char *)src)[len];
	else if (src == dst)
		return (dst);
	else
		while (++i < len)
			((char *)dst)[i] = ((char *)src)[i];
	return (dst);
}
