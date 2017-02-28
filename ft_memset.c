/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 11:26:32 by ggladkov          #+#    #+#             */
/*   Updated: 2017/02/27 12:25:49 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void *ft_memset(void *str, int c, int len);

int main(void)
{
	char dest[100] = "it is what it is";
	memset(dest, '&', 12);
	printf("%s", dest);

	char dest1[100] = "it is what it is";
	ft_memset(dest1, '&', 12);
	printf("%s", dest1);
	return 0;
}

void *ft_memset(void *str, int c, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		*str = c;
		str++;
	}
	return (str);
}	
