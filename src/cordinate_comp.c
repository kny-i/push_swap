#include "../include/push_swap.h"

void	get_min_comp(t_list **stack, size_t index)
{
	t_list	*head;
	t_list	*min;
	int		check_min;

	min = NULL;
	check_min = NOT_MIN_YET;
	head = *stack;
	while (head)
	{
		if ((head->index == NEVER_EDITED) && \
		(!check_min || head->data < min->data))
		{
			min = head;
			check_min = 1;
		}
		head = head->next;
	}
	if (min)
		min->index = index;
	return ;
}

void	cordinate_comp(t_list **stack)
{
	size_t	index;
	size_t	lst_size;

	index = 0;
	lst_size = ft_lstsize(stack);
	while (index < lst_size)
	{
		get_min_comp(stack, index);
		index++;
	}
}

/*

int	 main()
{
	t_list	*test = ft_lstnew(90);

	ft_lstadd_back(&test, ft_lstnew(39));
	ft_lstadd_back(&test, ft_lstnew(2));
	ft_lstadd_back(&test, ft_lstnew(4));
	ft_lstadd_back(&test, ft_lstnew(89));
	ft_printlst_data(&test);
	ft_printlst_index(&test);
	cordinate_comp(&test);
	ft_printlst_data(&test);
}*/
