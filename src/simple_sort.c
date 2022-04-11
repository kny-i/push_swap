#include "../include/push_swap.h"

void	simple_sort(t_list **stack_a, t_list **stack_b)
{
	int	l;

	l = ft_lstsize(stack_a);
	if (l == 2)
		sa(stack_a);
	else if (l == 3)
		sort_size3(stack_a);
	else if (l == 4)
		sort_size4(stack_a, stack_b);
	else if (l == 5)
		sort_size5(stack_a, stack_b);
}

/*

int	main()
{
	t_list *stack_a;
	t_list *stack_b;

	stack_a = calloc(sizeof(t_list *), 1);
	stack_b = calloc(sizeof(t_list *), 1);
	stack_a = ft_lstnew(4);
	ft_lstadd_back(&stack_a,ft_lstnew(3));
	ft_lstadd_back(&stack_a,ft_lstnew(5));
	ft_lstadd_back(&stack_a,ft_lstnew(0));
	ft_lstadd_back(&stack_a,ft_lstnew(2));
	//ft_printlst_data(stack_a);
	cordinate_comp(&stack_a);
	ft_printlst_index_data(&stack_a);
	simple_sort(&stack_a, &stack_b);
	ft_printlst_index_data(&stack_a);
	//ft_printf("stack_a ->\n");
	//ft_printlst_data(stack_a);
	return(0);
}*/
