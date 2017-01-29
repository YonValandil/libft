/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 17:39:14 by jjourne           #+#    #+#             */
/*   Updated: 2017/01/27 22:10:57 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char*)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[j])
		{
			while (little[j] && big[i + j] == little[j] && j < len)
				++j;
			if (little[j] == '\0' || j == len)
				return ((char*)big + i);
			j = 0;
		}
		++i;
	}
	return (NULL);
}
