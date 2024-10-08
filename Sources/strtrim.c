#include "../DynoCLib.h"

static size_t	ft_is_set(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_is_set(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_is_set(set, s1[end - 1]))
		end--;
	len = end - start + 1;
	str = allocate(len, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, len);
	return (str);
}
