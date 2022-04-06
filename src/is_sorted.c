#include "../include/push_swap.h"

int	is_sorted(t_list **stack)
{
	t_list	*head;

	head = *stack;
	while (head && head->next)
	{
		if (head->data <= head->next->data)
			head = head->next;
		else
			return (0);
	}
	return (1);
}
/*

int	 main()
{
	t_list *test = ft_lstnew(29);
	t_list *test2 = ft_lstnew(29);
	t_list *test3 = ft_lstnew(29);
	t_list *test4 = ft_lstnew(29);

	ft_lstadd_back(&test, test2);
	ft_lstadd_back(&test, test3);
	ft_lstadd_back(&test, test4);
	if (is_sorted(&test))
		ft_printf("works");
	else
		ft_printf("does'nt work");
	return(0);
}*/
