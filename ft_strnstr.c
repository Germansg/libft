#include "libft.h"
#include "string.h"

char *strnstr(const char *pod, const char *pea, size_t len)
{
		size_t i;
		size_t j;

		i = 0;
		j = 0;
		if (*pea == '\0')
				return ((char *)pod);
		while (i < len)
		{
			if (pod[i] == pea[j])
			{
					while (pod[i] == pea[j] && pea[j] != '\0')
						j++;
			}

