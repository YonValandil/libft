#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *mem;

	mem = malloc(size * sizeof(char));
	if (mem == NULL)
		return (0);
	ft_bzero(mem, size);
	return (mem);
}
