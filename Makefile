#Nombre del ejecutable
NAME = libft.a

#Compilador y flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

#Variables
ALL_FILES = $(wildcard *.c)
FILES = $(filter-out %_bonus.c, $(ALL_FILES))
OBJECTS = *.o
HEADER = libft.h
BONUS = $(filter %_bonus.c, $(ALL_FILES))
HEADER_BONUS = libft_bonus.h

#Regla por defecto: compilar todo
all: $(NAME)

#Regla para crear la libreria
$(NAME):
	$(CC) $(CFLAGS) -c $(FILES)
	ar rcs $(NAME) $(OBJECTS) $(HEADER)

#Regla para limpiar los archivos
clean:
	rm -f $(OBJECTS)

#Regla para limpiar todo, incluyendo la libreria
fclean: clean
	rm -f $(NAME)

#Regla para recompilar todo
re: fclean all

#Regla para añadir los archivos bonus a la compilacion de la libreria
bonus:
	$(CC) $(CFLAGS) -c $(BONUS)
	ar rcs $(NAME) $(OBJECTS) $(HEADER_BONUS)

#Indicamos que estas reglas no son archivos
.PHONY: all clean fclean re bonus
