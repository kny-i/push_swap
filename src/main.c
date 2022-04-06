#include "../include/push_swap.h"

static void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(stack_a) <= 5)
		simple_sort(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}

static void	init_stack_a(t_list **stack_a, int argc, char **argv)
{
	t_list	*new;
	char	**args;
	int		i;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack_a, new);
		i++;
	}
	cordinate_comp(stack_a);
}

int	main(int argc,	char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc < 2)
		return (-1);
	stack_a = (t_list *)ft_calloc(1, sizeof(t_list));
	stack_b = (t_list *)ft_calloc(1, sizeof(t_list));
	stack_a = NULL;
	stack_b = NULL;
	init_stack_a(&stack_a, argc, argv);
	if (is_sorted(&stack_a) || ft_lstsize(&stack_a) == 1)
	{
		free_stack(&stack_a);
		free_stack(&stack_b);
		return (0);
	}
	sort_stack(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
