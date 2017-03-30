#include "libft.h"

char *ft_strnstr(const char *pod, const char *pea, size_t len)
{
	size_t	i;
	size_t	j;
	int		mark;

	i = 0;
	if (*pea == '\0')
			return ((char *)pod);
	while (i < len)
	{
		j = 0;
		if (pod[i] == pea[j])
		{
			mark = i;
			while (pod[i] == pea[j] && pea[j] && i < len)
			{
				i++;
				j++;
				if (pea[j] == '\0')
					return ((char *)pod + mark);
			}
		}
	i++;
	}
	return (NULL);
}
