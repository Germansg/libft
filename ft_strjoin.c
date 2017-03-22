/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 08:30:03 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/21 21:20:39 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*freshy_fresh;
	int		size1;
	int		size2;

	size1 = ft_strsize((char *)s1);
	size2 = ft_strsize((char *)s2);
	freshy_fresh = (char *)malloc(sizeof(char) * (size1 + size2));
	if (!freshy_fresh)
		return (NULL);
	while (*s1)
	{
		*freshy_fresh = *s1;
		freshy_fresh++;
		s1++;
	}
	while (*s2)
	{
		*freshy_fresh = *s2;
		freshy_fresh++;
		s2++;
	}
	return (freshy_fresh);
}
