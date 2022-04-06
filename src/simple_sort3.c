#include "../include/push_swap.h"

void	sort_size3_sub(t_list **stack_a, t_list *head, int min, int next_min)
{
	if (head->index == min && head->next->index != next_min)
	{
		ra(stack_a);
		sa(stack_a);
		rra(stack_a);
	}
	else if (head->index == next_min)
	{
		if (head->next->index == min)
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

void	sort_size3(t_list **stack_a)
{
	t_list	*head;
	int		min;
	int		next_min;

	head = *stack_a;
	min = get_min_sort(stack_a, -1);
	next_min = get_min_sort(stack_a, min);
	if (is_sorted(stack_a))
		return ;
	sort_size3_sub(stack_a, head, min, next_min);
	return ;
}
