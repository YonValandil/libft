/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 09:35:14 by jjourne           #+#    #+#             */
/*   Updated: 2017/01/14 09:02:08 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char const *s);
int	ft_strlen(char const *s);
void	ft_swap(int *a, int *b);
char	*ft_strcpy(char *dest, char const *src);
char	*ft_strdup(char const *src);
void	ft_putnbr(int n);
int	ft_strcmp(char const *s1, char const *s2);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	ft_bzero(void *s, size_t n);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strncpy(char *dest, const char *src, size_t n);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);

#endif
