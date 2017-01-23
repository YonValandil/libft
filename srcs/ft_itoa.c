#include "libft.h"

int	ifneg(int n, int *f)
{
	if (n < 0)
	{
		*f = 1;
		n = -n;
	}
	return (n);
}

char	*ft_itoa(int n)
{
	char *s;
	int base;
	int i;
	int f;

	i = 0;
	f = 0;
	base = 1;
	n = ifneg(n, &f);
	s = ft_strnew(n);
	if (f == 1)
	{
		s[i] = '-';
		i++;
	}
	while ((n / base) >= 10)
		base *= 10;
	while (base > 0)
	{
		s[i] = ((n / base) % 10) + '0';
		base /= 10;
		i++;
	}
	s[i] = '\0';
	return (s);
}
