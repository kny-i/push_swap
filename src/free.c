#include "../include/push_swap.h"

int free_stack(t_list **stack)
{
	t_list *head;

	int i;
	while(stack[i])
		free(stack[i]);
		i++;
}