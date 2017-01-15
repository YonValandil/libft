#include "libft.h"

#include <stdio.h>
#include <limits.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/fcntl.h>

#define BUF_SIZE 512

//int	main(int argc, char *argv[])
int	main(void)
{
	//int	swapa;
	//int	swapb;
	//char 	*dup;
	//char *s;
	//char *e;
	//int c;
	//size_t n;

	//int fd;
	//int rd;
	//char buf[BUF_SIZE + 1];

	//argc = 1;
	//a = 5;
	//b = 9;
	//ft_putchar('Y');
	//ft_putstr("\nKonbanha\n");
	//printf("ft_strlen = %d\n", ft_strlen("pikachu"));
	//printf("\nft_strcmp = %d\nstrcmp = %d\n", ft_strcmp("yo", "ya"), strcmp("yo", "ya"));

	//printf("swapa = %d, swapb = %d\n", swapa, swapb);
	//ft_swap(&swapa, &swapb);
	//printf("swapa = %d, swapb = %d\n", swapa, swapb);

	//dup = ft_strdup("osaki ni shitsureishimasu");
	//printf("copy = %s\n", dup);

	/*  TEST FD
	rd = 1;
	fd = open(argv[argc], O_RDWR);
	if (fd > 0)
	{
		ft_putchar_fd('D', fd);
		ft_putnbr_fd(4444, fd);
		ft_putstr_fd("\ntest ft_putstr_fd ok !\n", fd);
		lseek(fd, 0, SEEK_SET);
		while (rd > 0)
		{
			rd = read(fd, buf, BUF_SIZE);
			buf[rd] = '\0';
			ft_putstr(buf);
		}
	}else{
		printf("open fail fd = %d\n", fd);
	}
	if (!close(fd))
		printf("\nfile close\n");
	*/

	//TEST MEMSET
	/*s = malloc(10 * sizeof(int));
	c = 90;
	n = 10;
	s = ft_memset(s, c, n);
	printf("\ns = %s\n", s);*/
	
	//TEST MEMMOVE
	/*char e[] = "memmove works !";

	s = malloc(20 * sizeof(char));
	n = 10;
	s = ft_memmove(s, e, n);
	printf("\ns = %s\n", s);*/

	//TEST BZERO
	/*s = malloc(10 * sizeof(char));
	n = 10;
	ft_bzero(s, n);
	printf("\nTEST s = %s\n", s);*/

	//printf("\nft_iscascii = %d\n",ft_isascii(50));
	//printf("\nft_isdigit = %d\n",ft_isdigit(47));
	printf("\nft_isalpha = %d\n",ft_isalpha(65));


	return (0);
}
