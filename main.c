#include "libft.h"

#include <stdio.h>
#include <limits.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/fcntl.h>

#define BUF_SIZE 512

void	ptrfnct(unsigned int n,char *s)
{
	printf("\nptrfnct avant = %c\n", s[n]);
	s[n] = s[n] + 1;
	printf("ptrfnct apres = %c\n", s[n]);
}

//int	main(int argc, char *argv[])
int	main(void)
{
	//int	swapa;
	//int	swapb;
	//char 	*dup;
	//char *s;
	//char s[] = "le yoyo de tata fait tatayoyo !";
	//char e[] = "panda";
	//char *strcat;
	//char *mem;
	//int c;

	/*int fd;
	int rd;
	char buf[BUF_SIZE + 1];*/

	//argc = 1;
	//a = 5;
	//b = 9;
	//ft_putchar('Y');
	//ft_putstr("\nKonbanha\n");
	//ft_putendl("\nKonbanha !");
	//printf("ft_strlen = %d\n", ft_strlen("pikachu"));
	//printf("\nft_strcmp = %d\nstrcmp = %d\n", ft_strcmp("yo", "ya"), strcmp("yo", "ya"));
	printf("\nft_strncmp = %d\nstrncmp = %d\n", ft_strncmp("yoya", "yaya", 1), strncmp("yoya", "yaya", 1));
	printf("\nft_strncmp = %d\nstrncmp = %d\n", ft_strncmp("yoya", "yaya", 4), strncmp("yoya", "yaya", 4));

	//printf("swapa = %d, swapb = %d\n", swapa, swapb);
	//ft_swap(&swapa, &swapb);
	//printf("swapa = %d, swapb = %d\n", swapa, swapb);

	//dup = ft_strdup("osaki ni shitsureishimasu");
	//printf("copy = %s\n", dup);

	/*printf("\ne = %s\n", e);
	ft_strclr(e);
	printf("\ne = %s\n", e);*/

	//TEST DE STRNCPY
	/*n = 10;
	s = malloc((ft_strlen(e) + 1) * sizeof(char));
	s = ft_strncpy(s, e, n);
	printf("\nft_strncpy = %s\n", s);*/

	//  TEST FD
	/*rd = 1;
	fd = open("testfd", O_RDWR);
	if (fd > 0)
	{
		ft_putchar_fd('D', fd);
		ft_putnbr_fd(4444, fd);
		ft_putstr_fd("\ntest ft_putstr_fd ok !\n", fd);
		ft_putendl_fd("\ntest ft_putendl_fd !", fd);
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
		printf("\nfile close\n");*/

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

	//TEST STRNEW (implicit memalloc, bzero, memset et strdel, memdel)
	/*mem = ft_strnew(10);
	mem[0] = 'y';
	mem[1] = 'o';
	mem[2] = '\0';
	printf("\nTEST mem = %s\n", mem);
	ft_memdel((void **)&mem);
	//ft_strdel(&mem);
	printf("\nTEST mem apres free = %s\n", mem);*/

	//printf("\nft_iscascii = %d\n",ft_isascii(50));
	//printf("\nft_isdigit = %d\n",ft_isdigit(47));
	//printf("\nft_isalpha = %d\n",ft_isalpha(67));
	//printf("\nft_isalnum = %d\n",ft_isalnum(50));
	//printf("\nft_toupper = %c\n",ft_toupper('c'));
	//printf("\nft_tolower = %c\n",ft_tolower('C'));
	//printf("\nft_isprint = %d\n",ft_isprint(32));
	//printf("\nft_isspace = %d\n",ft_isspace('\t'));
	
	//TEST STRITER(I)
	//printf("\nstr = %s\n", e);
	//ft_striteri(e, ptrfnct);
	//printf("\nstr apres = %s\n", e);

	//TEST FT_STRCAT ET FT_STRNCAT
	/*strcat = ft_strnew(ft_strlen(e) + 4);
	strcat[0] = 'y';
	strcat[1] = 'o';
	strcat[2] = 'y';
	strcat[3] = 'o';
	strcat[4] = '\0';
	//strcat = ft_strcat(strcat, e);
	//printf("\nstrcat = %s\n", strcat);
	strcat = ft_strncat(strcat, e, 2);
	printf("\nstrncat = %s\n", strcat);*/

	//TEST ATOI
	/*printf("\nft_atoi = %d\n", ft_atoi("\n\t +9997"));
	printf("\natoi = %d\n", atoi("\n\t +9997"));
	printf("\nft_atoi = %d\n", ft_atoi("\n\t -9997"));
	printf("\natoi = %d\n", atoi("\n\t -9997"));
	printf("\nft_atoi = %d\n", ft_atoi("\n\t --9a9a9 7a"));
	printf("\natoi = %d\n", atoi("\n\t --9a9a9 7a"));*/

	return (0);
}
