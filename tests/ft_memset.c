/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 11:26:32 by ggladkov          #+#    #+#             */
/*   Updated: 2017/02/28 01:01:38 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t len);

int		main(void)
{
	char dest[100];
	char dest1[100];

	ft_strcpy(dest, "it is what it is");
	memset(dest, '&', 12);
	printf("%s", dest);
	ft_strcpy(dest1, "it is what it is");
	ft_memset(dest1, '&', 12);
	printf("%s", dest1);
	return (0);
}

void	*ft_memset(void *str, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		((char *)str)[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
