#Regles qui ne concerne pas des noms de fichiers
.PHONY: clean fclean re
#Enleve les directives implicites par defauts
.SUFFIXES:

CC =			gcc
NAME =			libft.a
SRCS_DIR =		./src/
OBJS_DIR =		./
HEADER =		./include/
CFLAGS =		-Wall -Werror -Wextra
ARFLAGS =		-rcs

FT_IO =			ft_putchar ft_putchar_fd ft_putstr ft_putstr_fd \
				ft_putnbr ft_putnbr_fd ft_putendl ft_putendl_fd

SRC_LIST =		ft_lstnew ft_lstdelone ft_lstdel ft_lstadd ft_lstadd_end \
				ft_lstiter ft_lstmap

SRC_MATH = 		ft_range ft_sqrt ft_pow ft_abs

SRC_STRING =	ft_strcpy ft_strncpy ft_strdup ft_strlen  ft_strcmp ft_strncmp \
				ft_strcat ft_strncat ft_strlcat ft_strtrim ft_strjoin \
				ft_strappend ft_strsub ft_strstr ft_strnstr ft_isascii \
				ft_isdigit ft_isalpha ft_isalnum ft_isspace ft_isprint \
				ft_toupper ft_tolower ft_atoi ft_itoa ft_uimaxtoa_base \
				ft_strclr ft_striter ft_striteri ft_strnew ft_strdel ft_strequ \
				ft_strnequ ft_strmap ft_strmapift_strchr ft_strrchr ft_strsplit

SRC_ARRAY = 	ft_arrlen

SRC_MEMORY = 	ft_bzero ft_memalloc ft_realloc ft_memdel ft_memset ft_memmove \
				ft_memcpy ft_memccpy ft_memcmp ft_memchr ft_swap

CFILES =		$(SRC_MEMORY) $(SRC_ARRAY) $(SRC_STRING) \
				$(SRC_MATH) $(SRC_LIST) $(SRC_IO)

#pattern sub : $(var:pattern=replacement)
SRC_IO =		$(FT_IO:%=$(SCRS_DIR)/ft_io/%.c)
SRC_LIST =		$(FT_LIST:%=$(SCRS_DIR)/ft_list/%.c)
SRC_MATH =		$(FT_MATH:%=$(SCRS_DIR)/ft_math/%.c)
SRC_STRING =	$(FT_STRING:%=$(SCRS_DIR)/ft_string/%.c)
SRC_ARRAY =	$(FT_ARRAY:%=$(SCRS_DIR)/ft_array/%.c)
SRC_MEMORY =	$(FT_MEMORY:%=$(SCRS_DIR)/ft_memory/%.c)

OBJS_IO =		$(SRC_IO:%.c=$(OBJS_DIR)%.o)
OBJS_LIST =		$(SRC_LIST:%.c=$(OBJS_DIR)%.o)
OBJS_MATH =		$(SRC_MATH:%.c=$(OBJS_DIR)%.o)
OBJS_STRING =	$(SRC_STRING:%.c=$(OBJS_DIR)%.o)
OBJS_ARRAY =	$(SRC_ARRAY:%.c=$(OBJS_DIR)%.o)
OBJS_MEMORY =	$(SRC_MEMORY:%.c=$(OBJS_DIR)%.o)

all: 			$(NAME)

$(NAME): 		$(OBJS_IO) $(OBJS_LIST) $(OBJS_MATH) $(OBJS_STRING) $(OBJS_ARRAY) $(OBJS_MEMORY)
	ar $(ARFLAGS) $@ $(OBJS_IO) $(OBJS_LIST) $(OBJS_MATH) $(OBJS_STRING) $(OBJS_ARRAY) $(OBJS_MEMORY)
	@echo $@ Done !

$(OBJS_IO)%.o: $(SRC_IO)%.c
	mkdir -p $(OBJS_IO)
	$(CC) -c $< -I$(HEADER) -o $@ $(CFLAGS)

$(OBJS_LIST)%.o: $(SRC_LIST)%.c
	mkdir -p $(OBJS_LIST)
	$(CC) -c $< -I$(HEADER) -o $@ $(CFLAGS)

$(OBJS_MATH)%.o: $(SRC_MATH)%.c
	mkdir -p $(OBJS_MATH)
	$(CC) -c $< -I$(HEADER) -o $@ $(CFLAGS)

$(OBJS_STRING)%.o: $(SRC_STRING)%.c
	mkdir -p $(OBJS_STRING)
	$(CC) -c $< -I$(HEADER) -o $@ $(CFLAGS)

$(OBJS_ARRAY)%.o: $(SRC_ARRAY)%.c
	mkdir -p $(OBJS_ARRAY)
	$(CC) -c $< -I$(HEADER) -o $@ $(CFLAGS)

$(OBJS_MEMORY)%.o: $(SRC_MEMORY)%.c
	mkdir -p $(OBJS_MEMORY)
	$(CC) -c $< -I$(HEADER) -o $@ $(CFLAGS)

clean:
	rm -f $(OBJS_MEMORY)
	rm -f $(OBJS_ARRAY)
	rm -f $(OBJS_STRING)
	rm -f $(OBJS_MATH)
	rm -f $(OBJS_LIST)
	rm -f $(OBJS_IO)

fclean:			clean
	rm -f $(NAME)
	rm -f $(EXEC)

re:				fclean all
