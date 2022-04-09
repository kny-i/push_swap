#include "../include/push_swap.h"

void	put_error(char *str)
{
	ft_putendl_fd(str, 1);
	exit(0);
}

int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	while (num[i] == '-' || num[i] == '+')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_dup(char **args, int num, int i)
{
	i++;
	while (args[i])
	{
		if (ft_atoi(args[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

void	check_args(char **args)
{
	int			i;
	long long	num;

	i = 1;
	while (args [i])
	{
		if (!ft_isnum(args[i]))
			put_error("Error");
		num = atoi(args[i]);
		printf("%lld\n", num);
		if (num < INT_MIN || num > INT_MAX)
			put_error("Error");
		if (check_dup(args, num, i))
			put_error("Error");
		i++;
	}
}
