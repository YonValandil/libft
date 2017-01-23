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
	//printf("\nft_strncmp = %d\nstrncmp = %d\n", ft_strncmp("yoya", "yaya", 1), strncmp("yoya", "yaya", 1));
	//printf("\nft_strncmp = %d\nstrncmp = %d\n", ft_strncmp("yoya", "yaya", 4), strncmp("yoya", "yaya", 4));
	//printf("\nft_memcmp = %d\nmemcmp = %d\n", ft_memcmp("yoya", "yaya", 4), memcmp("yoya", "yaya", 4));
	//printf("\nft_strtrim =%s.\n", ft_strtrim("\t y ooo o \n"));

	//TEST STREQUE STRNEQU
	/*printf("\nft_strequ =%d\n", ft_strequ("yoyo", "yoyo"));
	printf("\nft_strcmp =%d\n\n", ft_strcmp("yoyo", "yoyo"));
	printf("\nft_strequ =%d\n", ft_strequ("o", "a"));
	printf("\nft_strcmp =%d\n\n", ft_strcmp("o", "a"));*/

	/*printf("\nft_strnequ =%d\n", ft_strnequ("yoyo", "yoyo", 3));
	printf("\nft_strncmp =%d\n\n", ft_strncmp("yoyo", "yoyo", 3));
	printf("\nft_strnequ =%d\n", ft_strnequ("oooo", "oooa", 2));
	printf("\nft_strncmp =%d\n\n", ft_strncmp("oooo", "oooa", 2));
	printf("\nft_strnequ =%d\n", ft_strnequ("oooo", "oooa", 4));
	printf("\nft_strncmp =%d\n\n", ft_strncmp("oooo", "oooa", 4));*/

	//printf("swapa = %d, swapb = %d\n", swapa, swapb);
	//ft_swap(&swapa, &swapb);
	//printf("swapa = %d, swapb = %d\n", swapa, swapb);

	/*dup = ft_strdup("osaki ni shitsureishimasu");
	printf("copy = %s\n", dup);*/

	/*printf("\ne = %s\n", e);
	ft_strclr(e);
	printf("\ne = %s\n", e);*/

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
	/*int *i;
	int *is;
	i = ft_memalloc(sizeof(int) * 5);
	is = ft_memalloc(sizeof(int) * 5);
	*i = 12345;
	is = ft_memmove(is, i, 5);
	printf("\ns = %d\n", *is);

	s = ft_strnew(ft_strlen(e));
	s = e + 2;
	s = ft_memmove(s, e, 5);
	printf("\ns = %s\n", s);*/
	//ft_memdel((void**)&s);

	//TEST MEMCHR
	/*s = ft_strnew(ft_strlen(e));
	s = ft_memchr(e, 's', 10);
	printf("\nft_memchr = %s\n", s);*/
	//ft_memdel((void**)&s);

	//TEST MEMCPY ET MEMCCPY
	/*int *ss;
	int *ee;
	ee = ft_memalloc(sizeof(int));
	ss = ft_memalloc(*ee);
	*ee = 5554;*/
	/*s = ft_strnew(ft_strlen(e));
	//s = e + 2;
	//ss = ft_memcpy(ss, ee, 10);
	s = ft_memccpy(s, e, 'd', 5);
	//printf("\ns = %d\n", *ss);
	printf("\ns = %s\n", s);
	ft_memdel((void**)&s);*/
	
	//TEST DE STRCPY ET STRNCPY
	/*s = ft_strnew(ft_strlen(e));
	//s = e + 2; //test du bug quand les pointeurs sont sur la meme chaine
	s = ft_strncpy(s, e, 30);
	printf("\nft_strncpy = %s\n", s);
	ft_strdel(&s);*/

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
	
	//ITOA
	/*printf("\nitoa = %s\n", ft_itoa(199));
	printf("\nitoa = %s\n", ft_itoa(-398));
	printf("\nitoa = %s\n", ft_itoa(0));
	printf("\nitoa = %s\n", ft_itoa(5554));*/
	return (0);
}
