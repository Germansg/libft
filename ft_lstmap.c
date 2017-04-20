#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list *new;
	t_list *link;

	new = NULL;
	link = NULL;
	while (lst)
	{
		if (new == NULL)
		{
			new = f(lst);
			link = new;
		}
		else
		{
			link->next = f(lst);
		}
	}
	return (new);
}
