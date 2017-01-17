#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
