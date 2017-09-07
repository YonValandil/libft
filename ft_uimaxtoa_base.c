/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uimaxtoa_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <jjourne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 04:06:56 by jjourne           #+#    #+#             */
/*   Updated: 2017/09/07 04:30:18 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_uimaxtoa_base(uimax_t n, int base)
{
    char    *str;

    str = NULL;
    while (n < base)
    {
        
        n /= base;
    }
    return(str);
}
