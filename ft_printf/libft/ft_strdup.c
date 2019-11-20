/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:04:44 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:04:46 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*buf;
	size_t	i;

	i = -1;
	buf = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (buf == 0)
		return (0);
	while (s1[++i])
		buf[i] = ((char *)s1)[i];
	buf[i] = '\0';
	return (buf);
}
