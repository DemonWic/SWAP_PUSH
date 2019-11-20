/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_oper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:46:04 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:46:06 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	do_oper(t_stacks *ab, char oper[])
{
	if (ft_strcmp(oper, "sa") == 0)
		return (do_sa(ab, 1));
	else if (ft_strcmp(oper, "sb") == 0)
		return (do_sb(ab, 1));
	else if (ft_strcmp(oper, "ss") == 0)
		return (do_ss(ab, 1));
	else if (ft_strcmp(oper, "pa") == 0)
		return (do_pa(ab, 1));
	else if (ft_strcmp(oper, "pb") == 0)
		return (do_pb(ab, 1));
	else if (ft_strcmp(oper, "ra") == 0)
		return (do_ra(ab, 1));
	else if (ft_strcmp(oper, "rb") == 0)
		return (do_rb(ab, 1));
	else if (ft_strcmp(oper, "rr") == 0)
		return (do_rr(ab, 1));
	else if (ft_strcmp(oper, "rra") == 0)
		return (do_rra(ab, 1));
	else if (ft_strcmp(oper, "rrb") == 0)
		return (do_rrb(ab, 1));
	else if (ft_strcmp(oper, "rrr") == 0)
		return (do_rrr(ab, 1));
	return (1);
}
