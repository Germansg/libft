#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
				s = s + i;
		return((char *)s);
		}
		i++;
	}
	return (NULL);
}
