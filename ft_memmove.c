/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 20:51:37 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/25 00:59:26 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t 	i;
	char	*tempsrc;

	i = 0;
	tempsrc = (char *)src;
	while (i < len)
	{
		((char *)dst)[i] = tempsrc[i];
		i++;
	}
	return (dst);
}
