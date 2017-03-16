/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 17:57:00 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/07 14:49:37 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return ;
	while (i < n)
	{
		((char*)s)[i] = (unsigned char)0;
		i++;
	}
	return ;
}

//int		main(void)
//{
//	char str1[50] = "testingtestingtesting";
//	char str2[50] = "testingtestingtesting";
//
//	ft_bzero(str1, 5);
//	printf("%s\n", str1);
//	bzero(str2, 5);
//	printf("%s\n", str2);
//}
