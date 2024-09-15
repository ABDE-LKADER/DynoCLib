#include "../DynoCLib.h"

int	is_whitespace(int c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}
