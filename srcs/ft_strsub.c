#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*ns;

	i = 0;
	ns = ft_strnew(len);
	while (i < len)
	{
		ns[i] = s[i + start];
		++i;
	}
	ns[i] = '\0';
	return (ns);
}
