/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 17:30:43 by jjourne           #+#    #+#             */
/*   Updated: 2017/01/25 18:59:36 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ifneg(int n, int *f)
{
	if (n < 0)
	{
		*f = 1;
		n = -n;
	}
	return (n);
}

/*static char	*sizemallocstr(char *s, int n, int f, int base)
{
	
	while (n >= 10)
	{
		n /= 10;
		base++;
	}
	s = ft_strnew(base + f);
	if (s == NULL)
		return (NULL);
	return (s);
}*/

char		*ft_itoa(int n)
{
	char	*s;
	int		base;
	int		i;
	int		f;

	i = 0;
	f = 0;
	base = 1;
	//s = NULL;
	n = ifneg(n, &f);
	//s = sizemallocstr(s, n, f, base);
	s = ft_strnew(11);
	if (f == 1)
	{
		s[i] = '-';
		i++;
	}
	while ((n / base) >= 10)
		base *= 10;
	while (base > 0)
	{
		s[i] = ((n / base) % 10) + '0';
		base /= 10;
		i++;
	}
	s[i] = '\0';
	return (s);
}
