#include "../DynoCLib.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*str;

	if (!s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = allocate(len, sizeof(char));
	if (!str)
		return (NULL);
	i = ft_strlen(s1);
	ft_memcpy(str, s1, i);
	j = 0;
	while (s2[j])
		str[i++] = s2[j++];
	return (str[i] = '\0', str);
}
