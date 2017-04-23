/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <ggladkov@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 11:34:37 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/22 23:09:44 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;
	unsigned char *ping;
	unsigned char *pong;

	i = 0;
	ping = (unsigned char *)s1;
	pong = (unsigned char *)s2;
	while (ping[i] || pong[i])
	{
		if (!ping[i] || !pong[i])
			return (ping[i] - pong[i]);
		if (ping[i] != pong[i])
			return (ping[i] - pong[i]);
		i++;
	}
	return (0);
}
