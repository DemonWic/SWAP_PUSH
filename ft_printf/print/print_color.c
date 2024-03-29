/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_color.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:36:32 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:36:49 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char g_s[4][1100] = {"\n▒▒▒▒▒▒▒▒█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n"\
	"▒▒▒▒▒▒▒█░▒▒▒▒▒▒▒▓▒▒▓▒▒▒▒▒▒▒░█\n▒▒▒▒▒▒▒█░▒▒▓▒▒▒▒▒▒▒▒▒▄▄▒▓▒▒░█░▄▄\n"\
	"▒▒▄▀▀▄▄█░▒▒▒▒▒▒▓▒▒▒▒█░░▀▄▄▄▄▄▀░░█\n▒▒█░░░░█░▒▒▒▒▒▒▒▒▒▒▒█░░░░░░░░░░░█\n"\
	"▒▒▒▀▀▄▄█░▒▒▒▒▓▒▒▒▓▒█░░░█▒░░░░█▒░░█\n▒▒▒▒▒▒▒█░▒▓▒▒▒▒▓▒▒▒█░░░░░░░▀░░░░░█\n"\
	"▒▒▒▒▒▄▄█░▒▒▒▓▒▒▒▒▒▒▒█░░█▄▄█▄▄█░░█\n▒▒▒▒█░░░█▄▄▄▄▄▄▄▄▄▄█░█▄▄▄▄▄▄▄▄▄█\n"\
	"▒▒▒▒█▄▄█░░█▄▄█░░░░░░█▄▄█░░█▄▄█\n",
	"\n▄███████▀▀▀▀▀▀███████▄\n"\
	"░▐████▀▒ЗАПУСКАЕМ▒▀██████▄\n"\
	"░███▀▒▒▒▒▒ДЯДЮ▒▒▒▒▒▒▀█████\n░▐██▒▒▒▒▒▒ЛЕВОНА▒▒▒▒▒████▌\n"\
	"░▐█▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████▌\n░░█▒▄▀▀▀▀▀▄▒▒▄▀▀▀▀▀▄▒▐███▌\n"\
	"░░░▐░░░▄▄░░▌▐░░░▄▄░░▌▐███▌\n░▄▀▌░░░▀▀░░▌▐░░░▀▀░░▌▒▀▒█▌\n"\
	"░▌▒▀▄░░░░▄▀▒▒▀▄░░░▄▀▒▒▄▀▒▌\n░▀▄▐▒▀▀▀▀▒▒▒▒▒▒▀▀▀▒▒▒▒▒▒█\n"\
	"░░░▀▌▒▄██▄▄▄▄████▄▒▒▒▒█▀\n░░░░▄██████████████▒▒▐▌\n"\
	"░░░▀███▀▀████▀█████▀▒▌\n░░░░░▌▒▒▒▄▒▒▒▄▒▒▒▒▒▒▐\n░░░░░▌▒▒▒▒▀▀▀▒▒▒▒▒▒▒▐\n",
	"\nЗАПУСКАЕМ░░░CЕРЕГУ\n░░░░░░▄▀▀▀▄░░░░░░░\n"\
	"▄███▀░◐░░░▌░░░░░░░\n░░░░▌░░░░░▐░░░░░░░\n░░░░▐░░░░░▐░░░░░░░\n"\
	"░░░░▌░░░░░▐▄▄░░░░░\n░░░░▌░░░░▄▀▒▒▀▀▀▀▄\n░░░▐░░░░▐▒▒▒▒▒▒▒▒▀▀▄\n"\
	"░░░▐░░░░▐▄▒▒▒▒▒▒▒▒▒▒▀▄\n░░░░▀▄░░░░▀▄▒▒▒▒▒▒▒▒▒▒▀▄\n"\
	"░░░░░░▀▄▄▄▄▄█▄▄▄▄▄▄▄▄▄▄▄▀▄\n"\
	"░░░░░░░░░░░▌▌░▌▌░░░░░\n░░░░░░░░░░░▌▌░▌▌░░░░░\n░░░░░░░░░▄▄▌▌▄▌▌░░░░░\n",
	"\n\nЗАПУСКАЕМ░░░CЕРЕГУ░\n░░░░░░▄▀▀▀▄░ГИДРУ░░\n"\
	"▄███▀░◐░▄▀▀▀▄░░░░░░\n"\
	"░░▄███▀░◐░░░░▌░░░\n░░░▐░▄▀▀▀▄░░░▌░░░░\n▄███▀░◐░░░▌░░▌░░░░\n"\
	"░░░░▌░░░░░▐▄▄▌░░░░░\n░░░░▌░░░░▄▀▒▒▀▀▀▀▄\n░░░▐░░░░▐▒▒▒▒▒▒▒▒▀▀▄\n"\
	"░░░▐░░░░▐▄▒▒▒▒▒▒▒▒▒▒▀▄\n░░░░▀▄░░░░▀▄▒▒▒▒▒▒▒▒▒▒▀▄\n"\
	"░░░░░░▀▄▄▄▄▄█▄▄▄▄▄▄▄▄▄▄▄▀▄\n░░░░░░░░░░░▌▌░▌▌░░░░░\n"
	"░░░░░░░░░░░▌▌░▌▌░░░░░\n░░░░░░░░░▄▄▌▌▄▌▌░░░░░\n"
};

static int	choose_picture(int j)
{
	if (j == 114)
		ft_putstr_full(g_s[0]);
	else if (j == 115)
		ft_putstr_full(g_s[1]);
	else if (j == 116)
		ft_putstr_full(g_s[2]);
	else if (j == 117)
		ft_putstr_full(g_s[3]);
	return (1);
}

int			print_color(int j)
{
	if (j == 106)
		ft_putstr("\e[0;30m");
	else if (j == 107)
		ft_putstr("\e[0;31m");
	else if (j == 108)
		ft_putstr("\e[0;32m");
	else if (j == 109)
		ft_putstr("\e[0;33m");
	else if (j == 110)
		ft_putstr("\e[0;34m");
	else if (j == 111)
		ft_putstr("\e[0;35m");
	else if (j == 112)
		ft_putstr("\e[0;36m");
	else if (j == 113)
		ft_putstr("\e[0;37m");
	else if (j == 118)
		ft_putstr("\e[0m");
	return (choose_picture(j));
}
