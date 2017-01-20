#include "libft.h"

void	ft_strdel(char **as)
{
	//ft_memdel(&as);
	if (as)
		free(*as);
}
