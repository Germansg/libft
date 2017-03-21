#include "libft.h"

char **ft_strsplit(char const *s, char c)
{
		char** freshy_fresh;
		int size_of_s;

		size_of_s = ft_strlen(s);

		freshy_fresh = (char **)malloc(sizeof(char) * (size_of_s));
		if (!freshy_fresh)
			return (NULL);
		

