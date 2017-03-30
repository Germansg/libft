/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 18:29:52 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/29 00:09:15 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
		char *dstptr;

		dstptr = dst;
		while (*src)
			*dstptr++ = *src++;
		*dstptr = '\0';
		return (dst);
}
