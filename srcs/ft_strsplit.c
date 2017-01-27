/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 17:39:29 by jjourne           #+#    #+#             */
/*   Updated: 2017/01/27 22:01:55 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		t;
	int		k;
	char	**ts;

	i = 0;
	j = 0;
	k = 0;
	t = 0;
	ts = (char**)malloc(sizeof(char) * 5);
	if (ts == NULL)
		return (NULL);
	printf("\ns: %s\n", s);
	while (s[j])
	{
		while (s[k] && s[k] != c)
		{
			printf("\ns[k]: %c\ni = %d\nk = %d\n", s[k], i, k);
			++k;
		}
		printf("\nk - j: %d\n", (k - j));
		ts[i] = ft_strnew(k - j);
		while (s[j] && s[j] != c)
		{
			ts[i][t] = s[j];
			printf("\nts[i][t]: %c\ni = %d\nt = %d\n", ts[i][t], i, t);
			++j;
			++t;
		}
		if (s[j] != '\0')
		{
			printf("\ns[j] = %c\n", s[j]);
			ts[i][t] = '\0';
			t = 0;
			++k;
			j++;
			++i;
			printf("\ns[j]+1 = %c\n", s[j]);
		}
	}
	return ((char**)ts);
}
