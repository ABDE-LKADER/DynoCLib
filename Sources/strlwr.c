#include "../DynoCLib.h"

char	*ft_strlwr(char *str)
{
	int		index;

	if (!str)
		return (NULL);
	index = -1;
	while (str[++index])
		str[index] = ft_tolower(str[index]);
	return (str);
}
