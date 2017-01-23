#include "libft.h"

int	istrimspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char	*ft_strtrim(const char *s)
{
	char 	*st;
	int 	i;
	int 	j;

	i = 0;
	j = ft_strlen(s);
	while (istrimspace(s[i]))
		++i;
	while (istrimspace(s[j - 1]))
		--j;
	if (j < i)
		j = i;
	st = ft_strnew(j - i);
	st = ft_strncpy(st, s + i, j - i);
	return (st);
}
