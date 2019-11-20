/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 13:59:04 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 13:59:06 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *stolp;
	t_list *ydali;

	if (!alst || !*alst || !del)
		return ;
	stolp = *alst;
	while (stolp->next != NULL)
	{
		del(stolp->content, stolp->content_size);
		ydali = stolp;
		stolp = stolp->next;
		free(ydali);
	}
	del(stolp->content, stolp->content_size);
	ydali = NULL;
	free(stolp);
	stolp = NULL;
	*alst = NULL;
}
