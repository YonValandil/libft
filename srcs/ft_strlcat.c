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
//#include "stdio.h"

size_t	ft_strlcat(char *dest, const char *src,  size_t size)
{
	size_t i;
	size_t j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] && j < size)  //j < (size - ft_strlen(dest) - 1)
	{
		dest[i] = src[j];
		++j;
		++i;
	}
	if (size >= (unsigned int)ft_strlen(dest))
		dest[i] = '\0';
	//printf("\nstrlcat = %s\n", dest);
	return (i);
}
