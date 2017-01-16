#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *s;

	s = ft_memalloc(size + 1);
	return (s);
}
