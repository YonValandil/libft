#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int 	i;
	char	*ns;

	i = 0;
	ns = ft_strnew(ft_strlen(s));
	while (s[i])
	{
		ns[i] = (*f)(i, s[i]);
		++i;
	}
	ns[i] = '\0';
	return (ns);
}
