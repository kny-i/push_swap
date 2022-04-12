#include "../include/push_swap.h"
void	ft_debuglst(t_list **stack_a, t_list **stack_b)
{
	t_list	*a;
	t_list	*b;

	a = *stack_a;
	b = *stack_b;
	while (a || b)
	{
		printf("%5s%5s\n",
			   ft_itoa(a->index),
			   ft_itoa(b->index)
			   );
		a = a->next;
		b = b->next;
	}
}
