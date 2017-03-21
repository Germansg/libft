/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <ggladkov@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 19:58:34 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/20 20:09:42 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int unsigned	i;
	char			*freshy_fresh;

	i = 0;
	freshy_fresh = (char *)malloc(sizeof(char) * (len + 1));
	if (!freshy_fresh)
		return (NULL);
	while (s[i] && start < len)
	{
		freshy_fresh[start] = s[i];
		start++;
	}
	return (freshy_fresh);
}