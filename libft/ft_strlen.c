// part1
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	return (counter);
}
