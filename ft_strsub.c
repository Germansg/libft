#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
		unsigned int i;
		char *freshy_fresh;

		 i = 0;
		 freshy_fresh = (char *)malloc(sizeof(char) * (len + 1));
			 if (!freshy_fresh)
				 return (NULL);
				while (s[i] && start < len)
				{
					freshy_fresh[start] = s[i];
					start++;
				}
	return (freshy_fresh);
}
