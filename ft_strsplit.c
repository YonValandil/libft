/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <jjourne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 17:39:29 by jjourne           #+#    #+#             */
/*   Updated: 2017/01/29 23:27:39 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	wordc(char const *s, char c)
{
	int i;
	int nw;

	i = 0;
	nw = 0;
	if (s[i] != c && s[i])
		nw++;
	while (s[i])
	{
		if (s[i + 1] && s[i] == c && s[i + 1] != c)
			++nw;
		++i;
	}
	return (nw);
}

char		**ft_strsplit(char const *s, char c)
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
	if (!(ts = (char**)malloc(sizeof(char*) * (wordc(s, c) + 1))) || !s || !c)
		return (NULL);
	printf("\npoires = %d\n", wordc(s, c) + 1);
	while (s[j])
	{
		while (s[k] && s[k] != c)
			++k;
		if (k - j > 0)
		{
			//printf("tfdkjskgjn\n");
			ts[i] = ft_strnew(k - j);
			while (s[j] && s[j] != c)
			{
				printf("fuck\n");
				ts[i][t] = s[j];
				++j;
				++t;
			}
			if (s[j] != '\0' && s[j + 1] != '\0')
			{
				printf("fuck\n");
				ts[i][t] = '\0';
				t = 0;
				++k;
				++i;
				++j;
			}
		}
		else
		 	j++;
		printf("tfdkjskgjn\n");
	}
	//ts[i + 1] = "\0";
	return (ts);
}
