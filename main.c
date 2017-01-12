#include "libft.h"
#include <stdio.h>
#include <string.h>

//int	main(int argc, char *argv[])
int	main(void)
{
	//int	a;
	//int	b;

	//a = 5;
	//b = 9;

	//ft_putchar('Y');
	//ft_putstr("\nKonbanha\n");
	//printf("ft_strlen = %d\n", ft_strlen("pikachu"));

	//printf("a = %d, b = %d\n", a, b);
	//ft_swap(&a, &b);
	//printf("a = %d, b = %d\n", a, b);

	printf("strcmp = %d\n", strcmp("aaa", "aaa"));
	printf("ft_strcmp = %d\n", ft_strcmp("aaa", "aaa"));

	printf("strcmp = %d\n", strcmp("abcd", "abcf"));
	printf("ft_strcmp = %d\n", ft_strcmp("abcd", "abcf"));

	printf("strcmp = %d\n", strcmp("yoyo", "yoyoyoyo"));
	printf("ft_strcmp = %d\n", ft_strcmp("yoyo", "yoyoyoyo"));

	printf("strcmp = %d\n", strcmp("yoyoyoyo", "yoyo"));
	printf("ft_strcmp = %d\n", ft_strcmp("yoyoyoyo", "yoyo"));
	return (0);
}
