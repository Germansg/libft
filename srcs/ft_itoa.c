/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <ggladkov@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 08:28:49 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/21 14:00:51 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <xlocale.h>
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

int		my_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	*temp;

	len = my_strlen(str);
	i = 0;
	temp = (char *)malloc(sizeof(char) * (len + 1));
	if (!temp)
		return (NULL);
	while (len > 0)
		temp[i++] = str[len--];
	return (temp);
}

int		my_get_length(int nbr)
{
	int length;

	length = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*fresh;
	int		neg;
	int		length;
	int		i;
	char	*buf;

	i = 0;
	neg = 0;
	if (n < 0)
		neg = 1;
	length = my_get_length(n);
	fresh = (char *)malloc(sizeof(char) * (length + 1));
	if (!fresh)
		return (NULL);
	while (n > 0)
	{
		fresh[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	if (neg == 1)
		fresh[i] = '-';
	buf = ft_strrev(fresh);
	return (buf);
}
