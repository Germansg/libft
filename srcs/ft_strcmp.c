#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s2++ && *s1++)
	{
		if (*s2 != *s1)
		return (*s1 - *s2);
	}
	return (0);
}
