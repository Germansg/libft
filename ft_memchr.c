/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 13:42:57 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/21 14:05:14 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *str;
	unsigned char f;

	(unsigned char)*str = (unsigned char)s;
	n = (unsigned char)c;
	i = 0;
	while (s[i] && i < n)
	{
		if 
			return (&s[i]);
		else
			i++;
	}
	return (NULL);
}
