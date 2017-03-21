/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <ggladkov@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 08:28:49 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/21 10:59:56 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		my_get_length(int  nbr)
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

char *ft_itoa(int n)
{
		char *fresh;
		int neg;
		int length;

		neg = 0;
		nbr = n;
		length = my_get_length(n);
		fresh = (char *)malloc(sizeof(char) * (length));
		if (!fresh)
			return (NULL);
		while (n != 0)
		{
				*fresh = 
