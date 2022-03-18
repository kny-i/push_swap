#include "../include/push_swap.h"

void    simple_sort(t_list **stack_a, t_list **stack_b)
{
    if (ft_lstsize(stack_a) == 2)
		sa(stack_a);
	else if (ft_lstsize(stack_a) == 3)
		sort_size3(stack_a);
	else if (ft_lstsize(stack_a) == 4)
		sort_size4(stack_a, stack_b);
	else if (ft_lstsize(stack_a) == 5)
		sort_size5(stack_a, stack_b);
}