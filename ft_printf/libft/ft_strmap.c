/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:06:01 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:06:03 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		a;

	if (!s)
		return (0);
	if (!f)
		return (0);
	a = ft_strlen(s);
	new = (char *)malloc(sizeof(char) * a + 1);
	if (!new)
		return (0);
	while (*s)
		*new++ = f(*s++);
	*new = '\0';
	return (new - a);
}
