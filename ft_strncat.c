/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 18:39:40 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/07 14:34:21 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j] || j < (int)n)
		s1[i++] = s2[j++];
	return (s1);
}

int		main(void)
{
	char str1[50];
	char str2[50];

	*str2 = "but whatever.";
	*str1 = "this is stupid";
	ft_strncat(str1, str2, 10);
	ft_putstr(str1);
}
