/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 17:37:17 by jjourne           #+#    #+#             */
/*   Updated: 2017/01/27 20:38:07 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t lendest;
	size_t calc;

	lendest = 0;
	while (dest[lendest] && lendest < size)
		lendest++;
	j = 0;
	i = lendest;
	calc = size - lendest - 1;
	while (src[j] && j < calc)
	{
		dest[i] = src[j];
		++j;
		++i;
	}
	//if (size >= (unsigned int)ft_strlen(dest))
	if (lendest - size > 0)
		dest[i] = '\0';
	return (lendest + ft_strlen(src));
}
