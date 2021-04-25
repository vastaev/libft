//part1
#include "libft.h"

// static int	ft_charcmp(char c1, char c2)
// {
// 	if (c1 == c2)
// 		return (1);
// 	else
// 		return (0);
// }

char	*ft_strchr(const char *s, int c)
{
	unsigned char	chr;

	chr = c;
	while (*s != chr)
		if (*s++ == '\0')
			return (0);
	return ((char *)s);
}
