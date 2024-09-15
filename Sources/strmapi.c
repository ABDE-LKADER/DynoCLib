#include "../DynoCLib.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*str;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = allocate(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
		str[len] = f(len, s[len]);
	return (str);
}
