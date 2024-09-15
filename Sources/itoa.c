#include "../DynoCLib.h"

static int	get_len(int n)
{
	int	len;

	if (n > 0)
		len = 0;
	else
		len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	unsigned int	num;
	char			*snum;

	len = get_len(n);
	snum = allocate(len + 1, sizeof(char));
	if (!snum)
		return (NULL);
	if (n < 0)
		num = -n;
	else
		num = n;
	snum[len] = '\0';
	while (len--)
	{
		snum[len] = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
		snum[0] = '-';
	return (snum);
}
