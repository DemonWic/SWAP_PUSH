/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:50:59 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:51:01 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*pre_sort(t_stacks ab)
{
	int *sorted;
	int i;

	if ((sorted = (int *)malloc(sizeof(int) * ab.num)) == NULL)
		return (NULL);
	ft_memcpy(sorted, ab.a, sizeof(int) * ab.num);
	ft_recursiv_shells_sort(sorted, ab.num - 1, ab.num / 2);
	i = 0;
	while (i <= ab.num - 1 - i)
	{
		ft_swap_int(sorted + i, sorted + (ab.num - 1 - i));
		i++;
	}
	return (sorted);
}
