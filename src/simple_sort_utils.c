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
	int		distance;

	distance = 0;
	head = *stack;
	while (head)
	{
		if (head->index == min)
			break ;
		distance++;
		head = head->next;
	}
	return (distance);
}
