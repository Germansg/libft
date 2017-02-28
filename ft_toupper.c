/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 17:00:45 by ggladkov          #+#    #+#             */
/*   Updated: 2017/02/27 18:29:31 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
		return (c + 'A' - 'a');
	else
		return (c);
}

int main(void)
{
	char c = 'g';
	ft_putchar(ft_toupper(c));
}
