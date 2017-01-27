/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 08:52:27 by jjourne           #+#    #+#             */
/*   Updated: 2017/01/27 18:03:42 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void *t;

	t = ft_memalloc(n * sizeof(*src));
	if (t == NULL)
		return (NULL);
	t = ft_memcpy(t, src, n);
	dest = ft_memcpy(dest, t, n);
	ft_memdel((void**)&t);
	return (dest);
}
