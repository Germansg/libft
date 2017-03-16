#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
		unsigned int i;
		char *new;

		i = 0;
		new = (char *)malloc(sizeof(new)) * (ft_strsize((char *)s) + 1);
		if (!new)
				return (NULL);
		while (s[i])
		{
				new[i] = f(i, s[i]);
				i++;
		}
		return (new);
}
