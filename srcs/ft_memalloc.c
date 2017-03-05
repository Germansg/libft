#include "libft.h"

void *ft_memalloc(size_t size)
{
	void *memory;

	memory = malloc(size);
	if (!memory)
		return (NULL);
	else
		ft_bzero(memory, size);
	return (memory);
}
