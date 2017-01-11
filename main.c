#include "libft.h"
#include <stdio.h>

//int	main(int argc, char *argv[])
int	main(void)
{
	int	l;
	int	a;
	int	b;

	a = 5;
	b = 9;
	ft_putchar('Y');

	ft_putstr("\nKonbanha\n");

	l = ft_strlen("pikachu");
	printf("ft_strlen = %d\n", l);

	printf("s1 = %d, s2 = %d\n", a, b);
	//ft_swap(&a, &b);
	printf("s1 = %d, s2 = %d\n", a, b);
	return (0);
}
