#include "libft.h"

void	ft_strclr(char *s)
{
	size_t l;
	l = ft_strlen(s);
	ft_bzero(s, l);
}
