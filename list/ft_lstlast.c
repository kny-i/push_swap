#include "../include/push_swap.h"

t_list	*ft_lstlast(t_list **list)
{
	t_list	*tmp;

	tmp = *list;
	while ((tmp)->next)
	{
		tmp = (tmp)->next;
		if ((tmp)->next == NULL)
			return (tmp);
	}
	return (tmp);
}
