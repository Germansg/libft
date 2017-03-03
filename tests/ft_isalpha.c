/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 18:25:46 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/02 18:36:10 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int ft_isalpha(int c)
{
	if ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a'))
		return (1);
	else
		return (0);
}

int main(void)
{
	if (ft_isalpha('g') == 1)
		ft_putstr("g is alpha\n");
	if (ft_isalpha('8') == 0)
		ft_putstr("8 is not alpha\n");
	if (ft_isalpha('n') == 1)
		ft_putstr("n is alpha\n");
	if (ft_isalpha('$') == 0)
		ft_putstr("$ is not alpha\n");
	if (ft_isalpha('H') == 1)
		ft_putstr("H is alpha\n");
	if (ft_isalpha(' ') == 0)
		ft_putstr("space is not alpha\n");
	if (ft_isalpha('p') == 1)
		ft_putstr("p is alpha\n");
	if (isalpha('g') == 1)
		ft_putstr("g is alpha\n");
	if (isalpha('8') == 0)
		ft_putstr("8 is not alpha\n");
	if (isalpha('n') == 1)
		ft_putstr("n is alpha\n");
	if (isalpha('$') == 0)
		ft_putstr("$ is not alpha\n");
	if (isalpha('H') == 1)
		ft_putstr("H is alpha\n");
	if (isalpha(' ') == 0)
		ft_putstr("space is not alpha\n");
	if (isalpha('p') == 1)
		ft_putstr("p is alpha\n");
}
