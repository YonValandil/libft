#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int i;
	int r;
	int signe;

	i = 0;
	r = 0;
	signe = 1;
	while (ft_isspace(nptr[i]))
		i++;
	if(nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signe = -1;
		i++;
	}
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		r = (r * 10) + (nptr[i] - '0');
		i++;
	}
	return (r * signe);
}
