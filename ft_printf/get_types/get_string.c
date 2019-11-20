/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:32:10 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:32:13 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*get_string(const void *arg)
{
	const char **s = (const char **)arg;

	if (*s == NULL)
		return (ft_strdup("(null)"));
	return (ft_strdup(*s));
}
