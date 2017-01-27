#include "libft.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int r;
	char dest[] = "panda";
	char src[] = "yoyo";
	
	r = ft_strlcat(dest, src, 3);
	printf("\nft_strlcat = %d\n", r);
	printf("\ndest = %s\n", dest);
//	r = ft_strlcat(dest, src, 4);
//	printf("\nft_strlcat = %d\n", r);
//	printf("\ndest = %s\n", dest);
	//r = ft_strlcat(dest, src, 15);
	//printf("\nft_strlcat = %d\n", r);

//	printf("\nft_strlcat = %zu\n", ft_strlcat("panda", "toto", 15));
//	printf("\nft_strlcat = %zu\n", ft_strlcat("panda", "toto", 5));
//	printf("\nft_strlcat = %zu\n", ft_strlcat("panda", "toto", 9));
	return (0);
}
