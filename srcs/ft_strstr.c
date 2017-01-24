#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (big[i])
	{
		if (big[i] == little[j])
		{
			while (little[j] && big[j + i] == little[j])
				++j;
			if (little[j] == '\0')
				return (ft_strsub(big, i, j));
			j = 0;
		}
		++i;
	}
	return (NULL);
}
