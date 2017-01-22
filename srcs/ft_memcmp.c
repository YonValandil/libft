#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (*(const unsigned char*)s1 == *(const unsigned char*)s2 && i < n)
	{
		s1++;
		s2++;
		++i;
	}
	return (*(const unsigned char*)s1 - *(const unsigned char*)s2);
}
