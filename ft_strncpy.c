/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 14:52:22 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/29 01:34:45 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *dstptr;

	dstptr = dst;
	if (!src || !dst)
			return (NULL);
	if (len == 0)
			return (NULL);
	while (*src && len--)
		*dstptr++ = *src++;
	if (len > 0)
	{
		while (len--)
			*dstptr++ = '\0';
	}	
	return (dst);
}
