/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 17:31:32 by jjourne           #+#    #+#             */
/*   Updated: 2017/01/27 19:51:23 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	//if (!s1 || !s2)
		//return (0);
	i = 0;
	while (*(const unsigned char*)s1 == *(const unsigned char*)s2
			&& (i + 1) < n)
	{
		s1++;
		s2++;
		++i;
	}
	return (*(const unsigned char*)s1 - *(const unsigned char*)s2);
}
