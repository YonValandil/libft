#Regles qui ne concerne pas des noms de fichiers
.PHONY: clean fclean re
#Enleve les directives implicites par defauts
.SUFFIXES:

CC =		gcc
EXEC =		bin #a enlever
NAME =		libft.a
SRCS_DIR =	./srcs/
OBJS_DIR =	./objs/
HEADER =	./includes/
CFLAGS =	-Wall -Werror -Wextra
ARFLAGS =	-rcs
CFILES =	ft_putchar ft_putchar_fd	\
			ft_putstr ft_putstr_fd		\
			ft_putnbr ft_putnbr_fd		\
			ft_strcpy ft_strdup			\
			ft_strlen ft_strcmp			\
			ft_memset					\
			ft_swap

#pattern sub : $(var:pattern=replacement)
SRCS =		$(CFILES:%=$(SCRS_DIR)%.c)
OBJS =		$(SRCS:%.c=$(OBJS_DIR)%.o) #pk seulement %.c

all: $(NAME)

$(NAME): $(OBJS)
	ar $(ARFLAGS) $@ $(OBJS)
	@echo $@ Done !
	$(CC) main.c $(NAME) -I$(HEADER) -o $(EXEC) $(CFLAGS) && ./$(EXEC)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	$(CC) -c $< -I$(HEADER) -o $@ $(CFLAGS)

clean:
	rm -f $(OBJS)

fclean:		clean
	rm -f $(NAME)
	rm -f $(EXEC)

re:			fclean all
