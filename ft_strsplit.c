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

static	size_t	my_wrdlen(char const *str, char c)
{
	int i;
	size_t len;

	i = 0;
	len = 0;
	while (str[i] != c && str[i])
	{
		len++;
		i++;
	}
	return(len);
}
		
static	char *copy_next(char const *str, char c)
{
	char *word;
	int i;

	i = 0;
	word = (char *)malloc(sizeof(*word) * my_wrdlen(str, c));
	if (word)
		return (NULL);
	while (str[i] != c && str[i])
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static	size_t	word_count(char const *str, char c)
{
	int i;
	size_t count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && str[i])
		{
			count++;
			i++;
		}
		while (str[i] != c && str[i])
			i++;
		while (str[i] == c && str[i])
			i++;
	}
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t i;
	size_t word_index;
	char **new;
	size_t count;

	if (!s || !c)
		return (NULL);
	i = 0;
	word_index = 0;
	count = word_count(s, c);
	new = (char **)malloc(sizeof(*new) * (word_count(s, c) + 2));
	if (!new)
		return (new);
	if (s[i] != c)
	{
		new[word_index] = copy_next(&s[i], c);
		word_index++;
		i = i + my_wrdlen(&s[i], c);
	}
	while (s[i] && word_index < count)
	{
		while (s[i] == c)
			i++;
		new[word_index] = copy_next(&s[i], c);
		word_index++;
		i = i + my_wrdlen(&s[i], c);
	}
	new[word_index] = NULL;
	return (new);
}
