/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 21:17:48 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/01 17:05:42 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;
<<<<<<< HEAD
	int				size;

	i = 0;
	size = 0;
	if (!f || !s)
		return (NULL);
	while (s[i++] != '\0')
		size++;
=======
	int			size;

	i = 0;
	size = 0;
	while (s[i])
	{
		i++;
		size++;
	}
	i = 0;
>>>>>>> 7e619cf5e8b938d2a00696385eb5a7558b6f55fb
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
