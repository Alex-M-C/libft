#Nombre del ejecutable
NAME = libft.a

#Compilador y flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

#Variables
FILES = ft_atoi.c		ft_putendl_fd.c	ft_strncmp.c	ft_bzero.c		ft_putnbr_fd.c	\
		ft_strnstr.c	ft_calloc.c		ft_putstr_fd.c	ft_strrchr.c	ft_isalnum.c	\
		ft_split.c		ft_strtrim.c	ft_isalpha.c	ft_strchr.c		ft_substr.c		\
		ft_isascii.c	ft_strdup.c		ft_tolower.c	ft_isdigit.c	ft_memchr.c		\
		ft_striteri.c	ft_isprint.c	ft_memcmp.c		ft_strjoin.c	ft_itoa.c		\
		ft_memcpy.c		ft_strlcat.c	ft_memmove.c	ft_strlcpy.c	ft_toupper.c	\
		ft_memset.c		ft_strlen.c		ft_putchar_fd.c	ft_strmapi.c
OBJECTS = $(FILES:.c=.o)
BONUS = ft_lstadd_back_bonus.c	ft_lstdelone_bonus.c	ft_lstmap_bonus.c				\
		ft_lstadd_front_bonus.c	ft_lstiter_bonus.c		ft_lstnew_bonus.c				\
		ft_lstclear_bonus.c		ft_lstlast_bonus.c		ft_lstsize_bonus.c
B_OBJECTS = $(BONUS:.c=.o)

#Regla por defecto: compilar todo
all: $(NAME)

#Regla para crear la libreria
$(NAME):
	$(CC) $(CFLAGS) -c $(FILES)
	ar rcs $(NAME) $(OBJECTS)

#Regla para limpiar los archivos
clean:
	rm -f $(OBJECTS) $(B_OBJECTS)

#Regla para limpiar todo, incluyendo la libreria
fclean: clean
	rm -f $(NAME)

#Regla para recompilar todo
re: fclean all

#Regla para añadir los archivos bonus a la compilacion de la libreria
bonus:
	$(CC) $(CFLAGS) -c $(BONUS) $(FILES)
	ar rcs $(NAME) $(B_OBJECTS) $(OBJECTS)

#Indicamos que estas reglas no son archivos
.PHONY: all clean fclean re bonus
