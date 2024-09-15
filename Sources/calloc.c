#include "../DynoCLib.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*loc;
	size_t	bytes;

	loc = NULL;
	bytes = count * size;
	if (count != 0 && bytes / count != size)
		return (NULL);
	loc = malloc(bytes);
	if (!loc)
		return (NULL);
	ft_bzero(loc, bytes);
	return (loc);
}
