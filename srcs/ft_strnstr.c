#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (big[i])
	{
		if (big[i] == little[j])
		{
			while (little[j] && big[i + j] == little[j] && j < len)
				++j;
			if (little[j] == '\0' || j == len)
				return (ft_strsub(big, i, j));
			j = 0;
		}
		++i;
	}
	return (NULL);
}
