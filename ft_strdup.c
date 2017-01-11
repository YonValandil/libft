#include "libft.h"

char	*ft_strdup(char const *src)
{
	char *d;

	d = malloc((ft_strlen(src) + 1) *  sizeof(char));
	if (d == NULL)
		return (0);
	ft_strcpy(d, src);
	return (d);
}
