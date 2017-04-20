/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 19:25:19 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/28 15:33:40 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	char *	mark;
	char *	bigptr;

	i = 0;
	j = 0;
	bigptr = (char *)big;
	if (*little == '\0')
		return (bigptr);
	while (*bigptr)
	{
		j = 0;
		if (*bigptr == little[j])
		{
			mark = bigptr;
			while (*bigptr == little[j])
			{
				j++;
				bigptr++;
				if (!little[j])
					return (mark);
			}
		}
		i++;
		mark = NULL;
		bigptr = (char *)big;
		bigptr += i;
	}
	return (NULL);
}
