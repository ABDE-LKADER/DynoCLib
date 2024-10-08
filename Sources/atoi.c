#include "../DynoCLib.h"

static int	over_fix(int sign)
{
	if (sign == 1)
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	num;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	num = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		if (num > 922337203685477580
			|| (num > 922337203685477580 && str[i] > '7'))
			return (over_fix(sign));
		num = num * 10 + str[i] - 48;
		i++;
	}
	return (num * sign);
}
