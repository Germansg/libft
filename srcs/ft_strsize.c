#include "libft.h"

int	ft_strsize(char *str)
{
		int size;

		size = 0;
		while (*str++)
			size++;
return (size);
}
