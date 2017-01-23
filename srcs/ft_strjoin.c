#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int 	j;
	char 	*ns;

	i = 0;
	j = 0;
	ns = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	while (s1[i])
	{
		ns[i] = s1[i];
		++i;
	}
	while (s2[j])
	{
		ns[i] = s2[j];
		++j;
		++i;
	}
	ns[i] = '\0';
	return (ns);
}
