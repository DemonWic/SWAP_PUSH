/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 13:59:42 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 13:59:44 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	prov(t_list *start_new_lst, t_list *listik)
{
	if ((listik)->next == NULL)
	{
		free(start_new_lst);
		start_new_lst = NULL;
		return (1);
	}
	return (0);
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*rabotaga;
	t_list	*new_lst;
	t_list	*start_new_lst;

	if (!lst || !f || (start_new_lst = f(lst)) == NULL)
		return (NULL);
	new_lst = start_new_lst;
	rabotaga = lst->next;
	while (rabotaga->next != NULL)
	{
		new_lst->next = f(rabotaga);
		if (prov(start_new_lst, new_lst) == 1)
			return (NULL);
		new_lst = new_lst->next;
		rabotaga = rabotaga->next;
	}
	new_lst->next = f(rabotaga);
	if (prov(start_new_lst, new_lst) == 1)
		return (NULL);
	new_lst->next->next = NULL;
	return (start_new_lst);
}
