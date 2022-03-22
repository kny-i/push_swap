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
void    ft_lstadd_front(t_list *stack, t_list *new);
t_list  *ft_lstlast(t_list *head);
void    ft_lstadd_back(t_list *stack, t_list *new);
size_t  ft_lstsize(t_list *stack);
void    ft_printlst_data(t_list *head);
void    ft_printlst_index(t_list *head);
void    ft_printlst_index_data(t_list *head);
int 	is_sorted(t_list *stack);
void	cordinate_comp(t_list *stack);
void    simple_sort(t_list *stack_a, t_list *stack_b);
int sa(t_list *stack_a);
int sb(t_list *stack_b);
int	ss(t_list *stack_a,t_list *stack_b);
int pa(t_list *stack_a, t_list *stack_b);
int pb(t_list *stack_b, t_list *stack_a);
int ra(t_list *stack_a);
int	rb(t_list *stack_b);
int rr(t_list *stack_a, t_list *stack_b);
int	rra(t_list *stack_a);
int	rrb(t_list *stack_b);
int	rrr(t_list *stack_a, t_list *stack_b);
#endif