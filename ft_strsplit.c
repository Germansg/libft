/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 15:20:21 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/21 21:28:26 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_wrdcount(const char *str)
{
	size_t i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (ft_isalpha(str[i]) == 1)
		{
			count++;
			while (ft_isalpha(str[i]) == 1)
				i++;
		}
		else
			i++;
	}
	return (count);
}

int		ft_chrcount(const char *str)
{
	size_t i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (ft_isalpha(str[i]) == 1)
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
	w = ft_wrdcount(s);
	l = ft_chrcount(s);
	new = (char **)malloc(sizeof(char) * w * l);
	if (!new)
		return (NULL);
	while (s[i++])
	{
		if (s[i] != *c)
			new[w][l] = s[i];
		else if (s[i] == *c)
		{
			w++;
			l = 0;
			while (s[i] == *c)
				i++;
		}
	}
	return (new);
}
