/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 19:12:14 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/22 22:32:58 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int neg;
	long num;

	neg = 1;
	num = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f'
					|| str[i] == '\r' || str[i] == '\n')
		i++;
	if (str[i] == '-')
	{
		i++;
		neg = -1;
		if (str[i] == '+')
			return (0);
	}
	if (str[i] == '+')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		num = num * 10 + (str[i] - '0');
		i++;
		if (num > 9223372036854775807 && neg == -1)
			return (0);
		if (num > 9223372036854775807 && neg == 0)
			return (-1);
	}
	return (num * neg);
}
