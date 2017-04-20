#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *current;
	t_list *that_one;

	current = *alst;
	while (current != NULL)
	{
		that_one = current->next;
		del(current, current->content_size);
		current = that_one;
	}
	*alst = NULL;
}

