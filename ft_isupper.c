/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 12:57:38 by ggladkov          #+#    #+#             */
/*   Updated: 2017/02/27 17:44:23 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return 1;
	else
		return 0;
}
