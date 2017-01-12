/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 09:34:37 by jjourne           #+#    #+#             */
/*   Updated: 2017/01/12 09:34:45 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *src)
{
	char *d;

	d = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (d == NULL)
		return (0);
	ft_strcpy(d, src);
	return (d);
}
