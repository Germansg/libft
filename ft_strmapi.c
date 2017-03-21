#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
		unsigned int i;
		char *new;
		char size;

		i = 0;
		size = ft_strsize((char *)s);
		new = (char *)malloc(sizeof(char) * (size + 1));
		if (!new)
				return (NULL);
		while (s[i])
		{
				new[i] = f(i, s[i]);
				i++;
		}
		return (new);
}
