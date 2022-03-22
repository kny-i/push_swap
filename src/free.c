#include "../include/push_swap.h"
void	ft_free(t_list **str)

void    free_stack(t_list **stack)
{
	t_list    *head;
	t_list    *tmp;

	head = *stack;
	while (head)
	{
		tmp = head;
		printf("tmp_add = %p\n", tmp);
		head = head->next;
		printf("head_add = %p\n", head);
		free(tmp);
	}
	free(stack);
}