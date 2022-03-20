#include "../include/push_swap.h"
int	get_min_sort(t_list **stack, int min_valid)
{
	t_list	*head;
	int 	min;

	head = *stack;
	min = head->index;
	while(head->next)
	{
		head = head->next;
		if ((head->index < min) && head->index != min_valid)
			min = head->index;
	}
	return(min);
}

void	sort_size3(t_list **stack_a)
{
	t_list *head;
	int		min;
	int		next_min;

	head = *stack_a;
	min = get_min_sort(stack_a, -1);
	next_min = get_min_sort(stack_a, min);
	if (is_sorted(stack_a))
		return ;
	if (head->index == min && head->next->index !=next_min)
	{
		ra(stack_a);
		sa(stack_a);
		rra(stack_a);
	}
	else if(head->index == next_min)
	{
		if(head->next->index == min)
			sa(stack_a);
		else
			rra(stack_a);
	}
	else
	{
		if (head->next->index == min)
			ra(stack_a);
		else
		{
			sa(stack_a);
			rra(stack_a);
		}
	}
}

void	sort_size4(t_list **stack_a, t_list **stack_b)
{

}

void    simple_sort(t_list **stack_a, t_list **stack_b)
{
    if (ft_lstsize(stack_a) == 2)
		sa(stack_a);
	else if (ft_lstsize(stack_a) == 3)
		sort_size3(stack_a);
	else if (ft_lstsize(stack_a) == 4)
		sort_size4(stack_a, stack_b);
//	else if (ft_lstsize(stack_a) == 5)
//		sort_size5(stack_a, stack_b);
}


int	main()
{
	t_list **stack_a;
	t_list **stack_b;

	stack_a = malloc(sizeof(t_list *));
	stack_b = malloc(sizeof(t_list *));
	*stack_a = ft_lstnew(4);
	ft_lstadd_back(stack_a,ft_lstnew(3));
	//ft_lstadd_back(stack_a,ft_lstnew(5));
	//ft_printlst_data(stack_a);
	cordinate_comp(stack_a);
	ft_printlst_index_data(stack_a);
	simple_sort(stack_a, stack_b);
	ft_printlst_index_data(stack_a);
	//ft_printf("stack_a ->\n");
	//ft_printlst_data(stack_a);
	return(0);
}