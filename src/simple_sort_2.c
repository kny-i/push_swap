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

int	get_distance_to_min(t_list **stack, int min)
{
	t_list	*head;
	int 	corect_num;

	corect_num = 0;
	head = *stack;
	while (head)
	{
		if (head->index == min)
			break;
		corect_num++;
		head = head->next;
	}
	return(corect_num);
}

void	sort_size4(t_list **stack_a, t_list **stack_b)
{
	int	distance;

	if (is_sorted(stack_a))
		return ;
	distance = get_distance_to_min(stack_a, -1);
	if (distance  == 1)
		ra(stack_a);
	else if(distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if(distance == 3)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_size3(stack_a);
	pa(stack_a, stack_b);
}

void	sort_size5(t_list **stack_a, t_list **stack_b)
{
	int	distance;

	if (is_sorted(stack_a))
		return ;
	distance = get_distance_to_min(stack_a, -1);
	if (distance  == 1)
		ra(stack_a);
	else if(distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if(distance == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (distance == 4)
		rra(stack_a);
	if (is_sorted(stack_a))
		return;
	pb(stack_a, stack_b);
	sort_size4(stack_a, stack_b);
	pa(stack_a, stack_b);
}
