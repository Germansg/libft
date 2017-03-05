/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 19:25:19 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/04 23:14:23 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *big, const char *little)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i] == little[j] && little[j])
		{
			i++;
			j++;
			if (little[j + 1] == '\0')
				return ((char *)little);
		}
		i++;
	}
	return (NULL);
}	

int main()
{
   const char haystack[20] = "Tutori what oint";
   const char needle[10] = "what";
   char *ret;

   ret = strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
   
   return(0);
}
