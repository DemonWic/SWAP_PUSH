/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 13:59:24 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 13:59:26 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *rabotaga;

	if (!lst || !f)
		return ;
	rabotaga = lst;
	while (rabotaga->next != NULL)
	{
		f(rabotaga);
		rabotaga = rabotaga->next;
	}
	f(rabotaga);
	rabotaga = rabotaga->next;
}
