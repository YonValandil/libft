#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int base;
	long int ln;

	ln = n;
	base = 1;
	if (ln < 0)
	{
		ft_putchar_fd('-', fd);
		ln = -ln;
	}
	while ((ln / base) >= 10)
		base *= 10;
	while (base > 0)
	{
		ft_putchar_fd(((ln / base) % 10) + '0', fd);
		base /= 10;
	}
}
