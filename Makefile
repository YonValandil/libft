#Regles qui ne concerne pas des noms de fichiers
.PHONY: clean fclean re
#Enleve les directives implicites par defauts
.SUFFIXES:

CC =		gcc
NAME =		libft.a
SRCS_DIR =	./
OBJS_DIR =	./
HEADER =	./
CFLAGS =	-Wall -Werror -Wextra -g
ARFLAGS =	-rcs
CFILES =	ft_putchar ft_putchar_fd ft_putstr ft_putstr_fd						\
			ft_putnbr ft_putnbr_fd ft_putendl ft_putendl_fd						\
			ft_strcpy ft_strncpy ft_strdup										\
			ft_strlen ft_strcmp ft_strncmp ft_strcat ft_strncat ft_strlcat ft_strtrim ft_strjoin ft_strsub																			\
			ft_bzero ft_memalloc ft_memdel ft_memset ft_memmove ft_memcpy ft_memccpy ft_memcmp ft_memchr ft_strstr ft_strnstr														\
			ft_isascii ft_isdigit ft_isalpha ft_isalnum ft_isspace ft_isprint	\
			ft_toupper ft_tolower ft_atoi ft_itoa								\
			ft_strclr ft_striter ft_striteri ft_strnew ft_strdel ft_strequ ft_strnequ ft_strmap ft_strmapi ft_strchr ft_strrchr ft_strsplit											\
			ft_swap ft_range ft_sqrt ft_pow\
			ft_lstnew ft_lstdelone ft_lstdel ft_lstadd ft_lstiter ft_lstmap

#pattern sub : $(var:pattern=replacement)
SRCS =		$(CFILES:%=$(SCRS_DIR)%.c)
OBJS =		$(SRCS:%.c=$(OBJS_DIR)%.o) #pk seulement %.c

all: $(NAME)

$(NAME): $(OBJS)
	ar $(ARFLAGS) $@ $(OBJS)
	@echo $@ Done !

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	mkdir -p $(OBJS_DIR)
	$(CC) -c $< -I$(HEADER) -o $@ $(CFLAGS)

clean:
	rm -f $(OBJS)

fclean:		clean
	rm -f $(NAME)
	rm -f $(EXEC)

re:			fclean all
