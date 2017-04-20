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

static	int	zero_check(int nmb)
{
	if (nmb == 0 || nmb == -0)
		return(1);
	else
		return(0);
}

static int	st_intlen(int value)
{
	int		len;

	len = 0;
	if (value < 0)
		len++;
	while (value)
	{
		len++;
		value /= 10;
	}
	return (len);
}

static char	*st_intmax(void)
{
	char	*buf;

	buf = ft_strnew(st_intlen(-2147483648) + 1);
	ft_strcpy(buf, "-2147483648");
	return (buf);
}

char *ft_itoa(int n)
{
	int temporary;
	int length;
	char *result;
	int negative;

	temporary = n;
	length = 1;
	if (n == -2147483648)
		return (st_intmax());
	negative = 0;
	if (zero_check(n))
		return ("0");
	if (n < 0)
	{
		negative = 1;
		n = -n;
	}
	while (temporary)
	{
		temporary /= 10;
		length++;
	}
	result = (char *)malloc(sizeof(char) * (length));
	if (!result)
		return (result);
	result[length] = '\0';
	while (length-- > 0)
	{
		result[length] = (n % 10) + '0';
		n = n / 10;
	}
	if (negative)
	{
		result[0] = '-';
		return (result);
	}
		return (result + 1);
}
//	
//static int main(int argc, char **argv)
//{
//	int	nbr;
//
//	if (argc != 2)
//		return(0);
//	nbr = atoi(argv[1]);
//	printf("%s\n", ft_itoa(nbr));
//	return (0);
//}

