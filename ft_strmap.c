#include "libft.h"

char * ft_strmap(char const *s, char (*f)(char))
{
		char *new;
		int i;

		i =0;
		new = (char *)malloc(sizeof(new) * (ft_strsize((char*)s)) + 1);
		if (!new)
			return (NULL);
		while (s[i])
		{
				new[i] = f(s[i]);
				i++;
		}
		return (new);
}
