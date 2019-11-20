/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:03:57 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:03:58 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *s1;

	s1 = (char *)s;
	while (*s1 != (char)c && *s1)
		s1++;
	if (*s1 != (char)c)
		return (0);
	return (s1);
}
