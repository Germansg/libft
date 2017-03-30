/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:04:20 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/21 21:23:51 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*rm_whitespace(char *s)
{
	int 	i;

	i = 0;
	if ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
		while ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
			s[i++] = '\0';
	return (&s[i]);
}

char	*rm_endwhite(char *s)
{
	int 	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
		s[i--] = '\0';
	return (s);
}

char	*ft_strtrim(char const *s)
{
	int		i;
	char	*new;
	int		size;

	i = 0;
	size = ft_strsize((char *)s);
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	while (s[i] != '\0')
	{
		new[i] = s[i];
		i++;
	}
	new = rm_whitespace(new);
	new = rm_endwhite(new);
	return (new);
}
