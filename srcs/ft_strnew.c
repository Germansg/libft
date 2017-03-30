#include "libft.h"

char *ft_strnew(size_t size)
{
		char *new;

		new = (char *)malloc(size);
		ft_bzero(new, size);
	return (new);
}
