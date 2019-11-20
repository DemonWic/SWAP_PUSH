/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:51:41 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:51:43 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int			push_b_main_even(t_stacks *ab, t_sorted srtd, int med, int flag)
{
	const int	difference = (srtd.bot - srtd.top) / 2;
	const int	rorrr = r_or_rr(*ab, 0, med, difference);
	int			count;
	int			f;

	count = 0;
	f = 0;
	while (count < difference)
		if (ab->a[ab->a_top] <= med)
		{
			count++;
			do_pb(ab, 0);
		}
		else
		{
			f++;
			rorrr == 0 ? do_ra(ab, 0) : do_rra(ab, 0);
			if (count == 0 && check_stack_a(ab, srtd, srtd.bot - 1) == 0)
				return (1);
		}
	if (flag == 1)
		rorrr == 0 ? many_rra(ab, f, 0) : many_ra(ab, f, 0);
	return (0);
}

void		push_b_secondary_even(t_stacks *ab, t_sorted srtd, int med)
{
	const int	difference = (srtd.bot - srtd.top) / 2;
	const int	rorrr = r_or_rr(*ab, 0, med, difference);
	int			count;
	int			f;

	count = 0;
	f = 0;
	while (count < difference)
		if (ab->a[ab->a_top] <= med)
		{
			count++;
			do_pb(ab, 0);
		}
		else
		{
			f++;
			rorrr == 0 ? do_ra(ab, 0) : do_rra(ab, 0);
		}
	rorrr == 0 ? many_rra(ab, f, 0) : many_ra(ab, f, 0);
}
