/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 19:25:19 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/07 14:50:30 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;
	int mark;

	i = 0;
	j = 0;
	if (*little == '\0')
			return ((char *)big);
	while (big[i] != '\0')
	{
		j = 0;
		if (big[i] == little [j])
		{
			mark = i;
			while (big[i] == little[j] && little[j])
			{
				i++;
				j++;
				if (little[j + 1] == '\0')
					return ((char *)big + mark);
			}
		}
		i++;
	}
	return (NULL);
}

int		main(void)
{
	 char haystack[40] = "kfjdslkfjflkjsd   "; const char needle[] = ""; printf("my strstr   :%s\ntheir strstr:%s\n", ft_strstr(haystack, needle), strstr(haystack, needle));
}
