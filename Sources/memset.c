#include "../DynoCLib.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*buffer;

	i = 0;
	buffer = (unsigned char *)b;
	while (i < len)
	{
		buffer[i] = c;
		i++;
	}
	return (buffer);
}
