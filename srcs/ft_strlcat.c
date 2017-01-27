/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 17:37:17 by jjourne           #+#    #+#             */
/*   Updated: 2017/01/25 19:53:48 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t lendest;
	size_t calc;

	lendest = 0;
	while (dest[lendest] && lendest < size)
	{
		printf("lendest = %zu, dest[lendest] = %c\n", lendest, dest[lendest]);
		lendest++;
	}
	j = 0;
	i = lendest;
	calc = size - lendest;
	printf("\nsize = %zu\n", size);
	printf("lendest = %zu\n", lendest);
	printf("size-len dest = %zu\n", calc);
	while (src[j] && j < calc)
	{
		printf("\nj = %zu\n", j);
		printf("src[j] = %c\n", src[j]);
		dest[i] = src[j];
		++j;
		++i;
	}
	if (size >= (unsigned int)ft_strlen(dest))
	{
		printf("\najout \\0\n");
		dest[i] = '\0';
	}
	printf("\nstrlcat = %s\n", dest);
	return (lendest + ft_strlen(src) - 1);
}
