/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 14:41:22 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/07 14:53:07 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while ((((char *)src)[i] != (unsigned char)c) && (i != n))
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (NULL);
}

int		main(void)
{
	char new[90];
	char old[61] = "abcdefghijklmno";
	char *pdest;

	pdest = ft_memccpy(new, old, 'o', 23);
	printf("Result: %s\n", new);
}
