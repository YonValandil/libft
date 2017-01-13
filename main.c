#include "libft.h"

#include <stdio.h>
#include <limits.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/fcntl.h>

#define BUF_SIZE 512

int	main(int argc, char *argv[])
//int	main(void)
{
	//int	swapa;
	//int	swapb;
	//char 	*dup;

	int fd;
	int rd;
	char buf[BUF_SIZE + 1];

	argc = 1;
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

	return (0);
}
