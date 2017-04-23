/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 19:27:19 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/23 10:34:23 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*freshy;

	freshy = (t_list *)malloc(sizeof(t_list));
	if (!freshy)
		return (NULL);
	if (!content || !content_size)
	{
		freshy->content = NULL;
		freshy->content_size = 0;
	}
	else
	{
		freshy->content = (void *)malloc(sizeof(content));
		if (freshy->content == NULL)
			return (NULL);
		freshy->content = ft_memcpy(freshy->content, content, content_size);
		freshy->content_size = content_size;
	}
	freshy->next = NULL;
	return (freshy);
}
