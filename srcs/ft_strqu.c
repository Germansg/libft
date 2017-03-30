#include "libft.h"
#include <stdio.h>

int	ft_strequ(char const *s1, char const *s2)
{
		while (*s1 && *s2)
		{
		if (*s1 != *s2)
			return (0);
		else 
				s1++;
				s2++;
		}
	return (1);
}

int	main(void)
{
	char str1[] = "test";
	char str2[] = "test";
	char str3[] = "best";

	if (ft_strequ(str1, str2) == 1)
			printf("theyre the same\n");
	if (ft_strequ(str1, str2) == 0)
			printf("something went wrong\n");
	if (ft_strequ(str1, str3) == 0)
			printf("it worked\n");
	if (ft_strequ(str1, str3) == 1)
			printf("something went terriblty wrong\n");
}
