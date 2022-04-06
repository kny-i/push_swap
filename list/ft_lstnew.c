#include "libft.h"

t_list	*ft_lstnew(int data)
{
	t_list	*new;

	new = (t_list *)calloc(1, sizeof(t_list));
	if (!new)
		return (NULL);
	new->data = data;
	new->index = NEVER_EDITED;
	new->next = NULL;
	return (new);
}
