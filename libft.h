/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <jjourne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 09:35:14 by jjourne           #+#    #+#             */
/*   Updated: 2017/01/29 20:43:38 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
  void *content;
  size_t content_size;
  struct s_list *next;
} t_list;

void	ft_putchar(char c);
void	ft_putstr(char const *s);
int		ft_strlen(char const *s);
void	ft_swap(int *a, int *b);
char	*ft_strcpy(char *dest, char const *src);
char	*ft_strdup(char const *src);
void	ft_putnbr(int n);
int		ft_strcmp(char const *s1, char const *s2);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
char	*ft_strncpy(char *dest, const char *src, size_t n);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_strclr(char *s);
void	ft_striter(char *s, void(*f)(char *));
void	ft_striteri(char *s, void(*f)(unsigned int, char *));
void	*ft_memalloc(size_t size);
char	*ft_strnew(size_t size);
char	*ft_strcat(char *dest, const char *src);
void	ft_memdel(void **ap);
int		ft_atoi(const char *nptr);
void	ft_strdel(char **as);
char	*ft_strncat(char *dest, const char *src, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_itoa(int n);
char	*ft_strtrim(char const *s);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *big, const char *little);
char	*ft_strnstr(const char *big, const char *little, size_t len);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	**ft_strsplit(char const *s, char c);
void	ft_lstadd();
t_list  *ft_lstnew(void);
void	ft_lstdel(void);
void	ft_lstiter(void);
t_list  *ft_lstmap(void);

#endif
