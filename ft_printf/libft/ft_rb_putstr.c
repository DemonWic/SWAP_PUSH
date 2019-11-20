/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb_putstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:03:03 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:03:07 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*red_yellow(char *s)
{
	if (*s && (*s > 32 && *s < 127))
	{
		write(1, "\e[31;m", 7);
		write(1, &*s, 1);
		write(1, "\e[0m", 5);
	}
	else if (*s == '\0')
		return (s);
	else
		write(1, &*s, 1);
	s++;
	if (*s && (*s > 32 && *s < 127))
	{
		write(1, "\e[33;m", 7);
		write(1, &*s, 1);
		write(1, "\e[0m", 5);
	}
	else if (*s == '\0')
		return (s);
	else
		write(1, &*s, 1);
	s++;
	return (s);
}

static	char	*green_blue(char *s)
{
	if (*s && (*s > 32 && *s < 127))
	{
		write(1, "\e[32;m", 7);
		write(1, &*s, 1);
		write(1, "\e[0m", 5);
	}
	else if (*s == '\0')
		return (s);
	else
		write(1, &*s, 1);
	s++;
	if (*s && (*s > 32 && *s < 127))
	{
		write(1, "\e[34;m", 7);
		write(1, &*s, 1);
		write(1, "\e[0m", 5);
	}
	else if (*s == '\0')
		return (s);
	else
		write(1, &*s, 1);
	s++;
	return (s);
}

void			ft_rb_putstr(char *s)
{
	if (!s)
		return ;
	while (*s)
	{
		s = red_yellow(s);
		s = green_blue(s);
		if (*s && (*s > 32 && *s < 127))
		{
			write(1, "\e[35;m", 7);
			write(1, &*s, 1);
			write(1, "\e[0m", 5);
		}
		else if (*s == '\0')
			return ;
		else
			write(1, &*s, 1);
		s++;
	}
}
