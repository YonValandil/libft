/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 09:33:45 by jjourne           #+#    #+#             */
/*   Updated: 2017/01/29 17:06:27 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char const *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}