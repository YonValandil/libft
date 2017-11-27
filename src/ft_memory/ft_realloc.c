#include "libft.h"

void *ft_realloc(void *data, size_t curr_len, size_t new_size)
{
	void *tmp;

	tmp = NULL;
	if (new_size == 0)
		return (NULL);
	if (!data)
		return (NULL);
	if (!(tmp = ft_memalloc(new_size)))
		return (NULL);
	ft_memcpy(tmp, data, curr_len);
	ft_memdel((void*)&data);
	return (tmp);
}
