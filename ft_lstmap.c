/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 17:00:28 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/22 22:18:33 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *link;

	new = NULL;
	link = NULL;
	while (lst->next)
	{
		if (new == NULL)
		{
			new = f(lst);
			link = new;
		}
		else
		{
			link->next = f(lst);
		}
		link = link->next;
	}
	return (new);
}
