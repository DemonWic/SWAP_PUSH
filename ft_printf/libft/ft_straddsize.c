/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_straddsize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:03:31 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:03:33 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_straddsize(char *s, size_t n)
{
	char	*new;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (size <= n)
		return (s);
	new = ft_strnew(ft_strlen(s));
	if (!new)
		return (NULL);
	new = ft_strncpy(new, s, size);
	free(s);
	s = NULL;
	return (new);
}
