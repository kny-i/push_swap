#ifndef PUSH_SWAP_H
# define  PUSH_SWAP_H

# include "../libft/libft.h"
# include <libc.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
	int				index;
}				t_list;

# define NEVEWER_EDITED -1
# define NOT_MIN_YET 0

t_list	*ft_lstnew(int value);
void    ft_lstadd_front(t_list **stack, t_list *new);
t_list  *ft_lstlast(t_list *head);
void    ft_lstadd_back(t_list **stack, t_list *new);
size_t  ft_lstsize(t_list **stack);
void    ft_printlst_data(t_list **head);
void    ft_printlst_index(t_list **head);
#endif