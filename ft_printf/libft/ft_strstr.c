/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:07:36 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:07:38 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;

	i = -1;
	if (*haystack == '\0' && *needle == '\0')
		return ((char *)haystack);
	else if (*haystack != '\0' && *needle == '\0')
		return ((char *)haystack);
	else if (*haystack == '\0' && *needle != '\0')
		return (0);
	while (haystack[++i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] || needle[j] == '\0')
			if (needle[j++] == '\0' || needle[j] == '\0')
				return ((char *)haystack + i);
	}
	return (0);
}
