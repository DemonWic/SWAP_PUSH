/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:46:51 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:46:53 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int		do_sa(t_stacks *ab, int flag)
{
	int			a_second;
	static int	debug;

	if (flag == 2)
	{
		debug = 1;
		return (0);
	}
	if (flag == 0)
		ft_putstr_full("sa\n");
	if (ab->a_num < 2)
		return (0);
	if ((a_second = ab->a_top + 1) == ab->num)
		a_second = 0;
	ft_swap_int(ab->a + ab->a_top, ab->a + a_second);
	debug == 1 && flag == 0 ? print_stack(ab, 2) : 0;
	return (0);
}

int		do_sb(t_stacks *ab, int flag)
{
	int			b_second;
	static int	debug;

	if (flag == 2)
	{
		debug = 1;
		return (0);
	}
	if (flag == 0)
		ft_putstr_full("sb\n");
	if (ab->b_num < 2)
		return (0);
	if ((b_second = ab->b_top + 1) == ab->num)
		b_second = 0;
	ft_swap_int(ab->b + ab->b_top, ab->b + b_second);
	debug == 1 && flag == 0 ? print_stack(ab, 9) : 0;
	return (0);
}

int		do_ss(t_stacks *ab, int flag)
{
	static int debug;

	if (flag == 2)
	{
		debug = 1;
		return (0);
	}
	if (flag == 0)
		ft_putstr_full("ss\n");
	do_sa(ab, 1);
	do_sb(ab, 1);
	debug == 1 && flag == 0 ? print_stack(ab, 5) : 0;
	return (0);
}
