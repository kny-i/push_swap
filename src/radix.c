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
		if (max > head->index)
			max_index = head->index;
		head = head->next;
	}
	while(max_index >> max_bits != 0)
		max_bits++;
	return(max_bits);
}
int	radix_sort(t_list **stack_a, t_list **stack_b)
{
	t_list *head_a;
	int		i;
	int		j;
	int		size_a;
	int		max_bits;

	head_a = *stack_a;
	size_a = ft_lstsize(stack_a);
	max_bits = count_max_bits(stack_a);
	i = 0;
	while(i < max_bits)
	{
		j = 0;
		while(j < size)
		{
			head_a = *stack_a;
			if ((head_a->index >> i) & 1)
				ra(stack_a);
			else
				pb(stack_b);
			j++;
		}
		while(!ft_lstsize(stack_b))
			pa(stack_a, stack_n);
		i++;
	}
}

