/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 19:12:14 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/28 14:57:15 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int neg;
	int num;

	neg = 1;
	num = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v' || *str == '\f'
					|| *str == '\r' || *str == '\n')
		str++;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	if (*str == '+')
		str++;
	while (*str <= '9' && *str >= '0')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * neg);
}
