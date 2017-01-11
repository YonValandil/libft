#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

//int	main(int argc, char *argv[])
int	main(void)
{
	//int	swapa;
	//int	swapb;
	char 	*copy;

	//a = 5;
	//b = 9;
	//ft_putchar('Y');
	//ft_putstr("\nKonbanha\n");
	//printf("ft_strlen = %d\n", ft_strlen("pikachu"));

	//printf("swapa = %d, swapb = %d\n", swapa, swapb);
	//ft_swap(&swapa, &swapb);
	//printf("swapa = %d, swapb = %d\n", swapa, swapb);

	copy = malloc(15 * sizeof(char));
	if(copy == NULL)
		return (0);
	ft_strcpy(copy, "tkt la famille");
	printf("copy = %s\n", copy);
	return (0);
}
