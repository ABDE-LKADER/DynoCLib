#include "../DynoCLib.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	l;
	unsigned char	*str;

	i = 0;
	l = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == l)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
