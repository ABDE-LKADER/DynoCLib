#include "../DynoCLib.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;
	size_t	ld;
	size_t	ls;

	len = 0;
	ls = ft_strlen(src);
	if (!dst && !dstsize)
		return (ls);
	while (dst[len] && len < dstsize)
		len++;
	ld = len;
	if (dstsize > len)
	{
		i = 0;
		while (src[i] && len < dstsize - 1)
		{
			dst[len] = src[i];
			len++;
			i++;
		}
		dst[len] = '\0';
	}
	return (ld + ls);
}
