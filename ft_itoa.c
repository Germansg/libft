/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <ggladkov@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 08:28:49 by ggladkov          #+#    #+#             */
/*   Updated: 2017/04/22 22:16:22 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	num_length(int num)
{
	size_t	len;

	len = 0;
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

static int	check_neg(int *num, size_t *len)
{
	if (*num < 0)
	{
		*len += 1;
		*num *= -1;
		return (1);
	}
	else
		return (0);
}

char		*ft_itoa(int n)
{
	char	*result;
	size_t	len;
	int		neg;

	if (n == 0 || n == -0)
		return ("0");
	if ((long)n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = num_length(n);
	neg = check_neg(&n, &len);
	result = ft_strnew(len + 1);
	if (!result)
		return (result);
	result[len] = '\0';
	len--;
	while (len)
	{
		result[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	result[0] = (n % 10) + '0';
	if (neg == 1)
		result[0] = '-';
	return (result);
}
