#include "../include/push_swap.h"

t_list	*ft_lstnew(int data)
{
	t_list	*new;

	new = (t_list *)calloc(1,sizeof(t_list));
	if (!new)
		return (NULL);
	new->data = data;
    new->index = NEVEWER_EDITED;
    return(new);
}



void    ft_lstadd_front(t_list **stack, t_list *new)
{
    new->next = *stack;
    *stack = new;
}

t_list  *ft_lstlast(t_list **head)
{
    while ((*head)->next)
    {
        *head = (*head)->next;
        if ((*head)->next == NULL)
            return (*head);
    }
    return (*head);
}


void    ft_lstadd_back(t_list **stack, t_list *new)
{
    t_list  *last;

    if (*stack)
    {
        last = ft_lstlast(stack);
        last->next = new;
        new->next = NULL;
    }
    else
    {
		*stack = new;
        (*stack)->next = NULL;
    }
}

size_t   ft_lstsize(t_list **stack)
{
    size_t  i;
	t_list	*tmp;

    i = 0;
	tmp = *stack;
    while(tmp)
    {
        tmp = tmp->next;
        i++;
    }
    return (i);
}

void    ft_printlst_index_data(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	ft_printf("data = %d, index = %d\n",(*stack)->data, (*stack)->index);
	while(tmp)
	{
		ft_printf("data = %d, index = %d\n",tmp->data, tmp->index);
		tmp = tmp->next;
	}
}

int main()
{
	t_list *head;

	head = ft_lstnew(0);
	ft_lstadd_back(&head, ft_lstnew(1));
	ft_lstadd_back(&head, ft_lstnew(2));
	ft_lstadd_back(&head, ft_lstnew(3));
	ft_lstadd_back(&head, ft_lstnew(4));
	ft_lstadd_back(&head, ft_lstnew(5));
	ft_lstsize(&head);
	ft_printlst_index_data(&head);
	system("leaks a.out");
}


