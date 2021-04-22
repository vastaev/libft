//part2
//receive int, return string
#include "libft.h"

static int	nlen(int n)
{
	int		counter;

	counter = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		counter++;
	}
	while (n)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

static char	*ifzero(void)
{
	char	*str;

	str = malloc(2);
	if (str == NULL)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		numlen;
	long	nb;

	nb = n;
	numlen = nlen(n);
	str = (char *)malloc(numlen + 1);
	if (str == NULL)
		return (NULL);
	str[numlen--] = '\0';
	if (nb == 0)
		return (ifzero());
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb)
	{
		str[numlen] = (nb % 10) + 48;
		nb = nb / 10;
		numlen--;
	}
	return (str);
}
