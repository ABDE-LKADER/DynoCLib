#include "../DynoCLib.h"

char	*ft_substr(char const *s, unsigned int start,
	size_t len)
{
	size_t	slen;
	char	*str;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	str = allocate(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	return (ft_strlcpy(str, s + start, len + 1), str);
}
