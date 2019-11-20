/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:44:23 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:44:25 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 128

# include <stdio.h>
# include <unistd.h>
# include <ctype.h>
# include <fcntl.h>
# include <stdlib.h>
# include "checker.h"

int					get_next_line(const int fd, char **line);

typedef	struct		s_gnl
{
	int				fd;
	char			*str;
	int				i;
	struct s_gnl	*next;
}					t_gnl;

#endif
