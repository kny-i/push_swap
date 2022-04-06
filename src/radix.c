#include "../include/push_swap.h"

int	count_max_bits(t_list **stack)
{
	t_list	*head;
	int		max_index;
	int 	max_bits;

	head = *stack;
	max_index = (*stack)->index;
	max_bits = 0;
	while(head)
	{
		if (head->index > max_index)
			max_index = head->index;
		head = head->next;
	}
	while((max_index >> max_bits) != 0)
		max_bits++;
	return(max_bits);
}

int	radix_sort(t_list **stack_a, t_list **stack_b)
{
	t_list  *head_a;
	int		i;
	int		j;
	int		size_a;
	int		max_bits;

	size_a = ft_lstsize(stack_a);
	max_bits = count_max_bits(stack_a);
	i = 0;
	while(i < max_bits)
	{
		j = 0;
		while(j++ < size_a)
		{
			head_a = *stack_a;
			if ((head_a->index >> i) & 1)
			{
				ra(stack_a);
			}
			else
				pb(stack_b, stack_a);
		}
		while(ft_lstsize(stack_b) != 0)
			pa(stack_a, stack_b);
		i++;
		ft_lstsize()
	}
	return(0);
}
/*

int	main()
{
	t_list **stack_a;
	t_list **stack_b;

	stack_a = malloc(sizeof(t_list *));
	stack_b = malloc(sizeof(t_list *));
	*stack_a = ft_lstnew(0);
	ft_lstadd_back(stack_a,ft_lstnew(3));
	ft_lstadd_back(stack_a,ft_lstnew(2));
	ft_lstadd_back(stack_a,ft_lstnew(7));
	ft_lstadd_back(stack_a,ft_lstnew(5));
	ft_lstadd_back(stack_a,ft_lstnew(6));
	ft_lstadd_back(stack_a,ft_lstnew(4));
	//ft_printlst_data(stack_a);
	cordinate_comp(stack_a);
	ft_printlst_index_data(stack_a);
	radix_sort(stack_a, stack_b);
	ft_printlst_index_data(stack_a);
	//ft_printf("stack_a ->\n");
	//ft_printlst_data(stack_a);
	return(0);
}
*/
