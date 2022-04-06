#include "../include/push_swap.h"

int	get_min_sort(t_list **stack, int min_valid)
{
	t_list	*head;
	int		min;

	head = *stack;
	min = head->index;
	while (head->next)
	{
		head = head->next;
		if ((head->index < min) && head->index != min_valid)
			min = head->index;
	}
	return (min);
}

int	get_distance_to_min(t_list **stack, int min)
{
	t_list	*head;
	int		corect_num;

	corect_num = 0;
	head = *stack;
	while (head)
	{
		if (head->index == min)
			break ;
		corect_num++;
		head = head->next;
	}
	return (corect_num);
}
