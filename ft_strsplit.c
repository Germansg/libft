/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 15:20:21 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/28 14:28:02 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int		ft_wrdcount(const char *str, char c)
{
	size_t i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] !=  c)
		{
			count++;
			i++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

int		ft_chrcount(const char *str, char c)
{
	size_t i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
			count++;
		else
			i++;
	}
	return (count);
}

char	**ft_strsplit(char const *s, char *c)
{
	int i;
	int w;
	int l;
	char **new;

	i = 0;
	w = ft_wrdcount(s, *c);
	l = ft_chrcount(s, *c);
	new = (char **)malloc(sizeof(char) * w * l);
	if (!new)
		return (NULL);
	while (s[i])
	{
		if (s[i] != *c)
			new[w][l++] = s[i];
		else if (s[i] == *c)
		{
			w++;
			l = 0;
			while (s[i] == *c)
				i++;
		}
		i++;
	}
	return (new);
}
