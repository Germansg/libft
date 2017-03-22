/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 20:51:37 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/21 21:14:50 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t 	i;
	char 	*temp;
	char 	*tempdst;
	char 	*tempsrc;

	i = 0;
	temp = (char *)malloc(sizeof(*src));
	tempdst = (char *)dst;
	tempsrc = (char *)src;

	while (tempsrc[i])
	{
		temp[i] = tempsrc[i];	
		i++;
	}
	i = 0;
	while (temp[i] && i < len)
	{
		tempdst[i] = temp[i];
		i++;
	}
	return (dst);
}
