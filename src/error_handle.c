#include "../include/push_swap.h"

void	put_error(char *str)
{
	ft_putendl_fd(str, 2);
	exit(0);
}

int	ft_isnum(char *num)
{
	int	i;
	int	count_num;

	i = 0;
	count_num = 0;
	while (num[i] == '-' || num[i] == '+')
	{
		i++;
		if (i == 2)
			return (0);
	}
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		count_num++;
		i++;
	}
	if (!count_num)
		return (0);
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

int	check_in_range(char *num)
{
	int			i;
	long long	lnum;

	i = 0;
	while (num[i])
	{
		if (i > INTMAX_RANGE)
			return (0);
		i++;
	}
	lnum = ft_atoll(num);
	if (lnum < INT_MIN || lnum > INT_MAX)
		return (0);
	return (1);
}

void	check_args(char **args, int start)
{
	int		i;
	int		num;

	i = start;
	while (args [i])
	{
		if (!ft_isnum(args[i]))
			put_error("Error");
		if (!check_in_range(args[i]))
			put_error("Error");
		num = ft_atoi(args[i]);
		if (check_dup(args, num, i))
			put_error("Error");
		i++;
	}
}
