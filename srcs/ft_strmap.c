#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int 	i;
	char	*ns;

	i = 0;
	ns = ft_strnew(ft_strlen(s));
	while (s[i])
	{
		ns[i] = (*f)(s[i]);
		++i;
	}
	ns[i] = '\0';
	return (ns);
}
