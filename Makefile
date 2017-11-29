#Regles qui ne concerne pas des noms de fichiers
.PHONY: clean fclean re
#Enleve les directives implicites par defauts
.SUFFIXES:

CC =			gcc
NAME =			libft.a
SRC_DIR =		src
OBJ_DIR =		obj
HEADER =		include/
CFLAGS =		-Wall -Werror -Wextra
ARFLAGS =		-rcs

FT_IO =			ft_get_next_line ft_putchar ft_putchar_fd ft_putstr \
				ft_putstr_fd ft_putnbr ft_putnbr_fd ft_putendl ft_putendl_fd

FT_LIST =		ft_lstnew ft_lstdelone ft_lstdel ft_lstadd ft_lstadd_end \
				ft_lstiter ft_lstmap

FT_MATH = 		ft_range ft_sqrt ft_pow ft_abs

FT_STRING =		ft_strcpy ft_strncpy ft_strdup ft_strlen  ft_strcmp ft_strncmp \
				ft_strcat ft_strncat ft_strlcat ft_strtrim ft_strjoin \
				ft_strappend ft_strsub ft_strstr ft_strnstr ft_isascii \
				ft_isdigit ft_isalpha ft_isalnum ft_isspace ft_isprint \
				ft_toupper ft_tolower ft_atoi ft_itoa ft_uimaxtoa_base \
				ft_strclr ft_striter ft_striteri ft_strnew ft_strdel ft_strequ \
				ft_strnequ ft_strmap ft_strmapi ft_strchr ft_strrchr ft_strsplit

FT_ARRAY =	 	ft_arrlen

FT_MEMORY = 	ft_bzero ft_memalloc ft_realloc ft_memdel ft_memset ft_memmove \
				ft_memcpy ft_memccpy ft_memcmp ft_memchr ft_memjoin ft_swap

#pattern sub : $(var:pattern=replacement)
SRC_IO =		$(FT_IO:%=$(SRC_DIR)/ft_io/%.c)
SRC_LIST =		$(FT_LIST:%=$(SRC_DIR)/ft_list/%.c)
SRC_MATH =		$(FT_MATH:%=$(SRC_DIR)/ft_math/%.c)
SRC_STRING =	$(FT_STRING:%=$(SRC_DIR)/ft_string/%.c)
SRC_ARRAY =		$(FT_ARRAY:%=$(SRC_DIR)/ft_array/%.c)
SRC_MEMORY =	$(FT_MEMORY:%=$(SRC_DIR)/ft_memory/%.c)

OBJ_IO =		$(SRC_IO:$(SRC_IO)/%.c=$(OBJ_DIR)/%.o)
OBJ_LIST =		$(SRC_LIST:$(SRC_LIST)/%.c=$(OBJ_DIR)/%.o)
OBJ_MATH =		$(SRC_MATH:$(SRC_MATH)/%.c=$(OBJ_DIR)/%.o)
OBJ_STRING =	$(SRC_STRING:$(SRC_STRING)/%.c=$(OBJ_DIR)/%.o)
OBJ_ARRAY =		$(SRC_ARRAY:$(SRC_ARRAY)/%.c=$(OBJ_DIR)/%.o)
OBJ_MEMORY =	$(SRC_MEMORY:$(SRC_MEMORY)/%.c=$(OBJ_DIR)/%.o)

all: 			$(NAME)

$(NAME): 		$(OBJ_IO) $(OBJ_LIST) $(OBJ_MATH) $(OBJ_STRING) $(OBJ_ARRAY) $(OBJ_MEMORY)
	ar $(ARFLAGS) $@ $(OBJ_IO) $(OBJ_LIST) $(OBJ_MATH) $(OBJ_STRING) $(OBJ_ARRAY) $(OBJ_MEMORY)
	@echo $@ Done !

$(OBJ_DIR)/.%o: $(SRC_IO).%c
	mkdir -p $(OBJ_DIR)
	$(CC) -c $< -I$(HEADER) -o $@ $(CFLAGS)

$(OBJ_DIR)/.%o: $(SRC_LIST).%c
	mkdir -p $(OBJ_DIR)
	$(CC) -c $< -I$(HEADER) -o $@ $(CFLAGS)

$(OBJ_DIR)/.%o: $(SRC_MATH).%c
	mkdir -p $(OBJ_DIR)
	$(CC) -c $< -I$(HEADER) -o $@ $(CFLAGS)

$(OBJ_DIR)/.%o: $(SRC_STRING).%c
	mkdir -p $(OBJ_DIR)
	$(CC) -c $< -I$(HEADER) -o $@ $(CFLAGS)

$(OBJ_DIR)/.%o: $(SRC_ARRAY).%c
	mkdir -p $(OBJ_DIR)
	$(CC) -c $< -I$(HEADER) -o $@ $(CFLAGS)

$(OBJ_DIR)/.%o: $(SRC_MEMORY).%c
	mkdir -p $(OBJ_DIR)
	$(CC) -c $< -I$(HEADER) -o $@ $(CFLAGS)

clean:
	rm -f $(OBJ_DIR)

fclean:			clean
	rm -f $(NAME)
	rm -f $(EXEC)

re:				fclean all
