#include "libft.h"

t_list *ft_lstnew(void const *content, size_t content_size)
{
	t_list	*freshy;

	freshy = (t_list *)malloc(sizeof(*freshy));
			if (!freshy)
			return (NULL);
	if (!content || !content_size)
	{
		freshy->content = NULL;
		freshy->content_size = 0;
	}
	else
	{
			freshy->content = malloc(sizeof(content));
			if (freshy->content == NULL)
				return (NULL);

			freshy->content = memcpy(freshy->content, content, content_size);
			freshy->content_size = content_size;
	}
	freshy->next = NULL;
	return (freshy);
}
