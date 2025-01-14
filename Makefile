#Nombre del ejecutable
NAME = libft.a

#Compilador y flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

#Archivos fuente
FILES = *.c
OBJECTS = *.o
HEADERS = *.h
BONUS = *_bonus.c

#Regla por defecto: compilar todo
all: $(NAME)

# Regla para crear la libreria
$(NAME):
	$(CC) $(CFLAGS) -c $(FILES)
	ar rcs $(NAME) $(OBJECTS) $(HEADERS)

#Regla para limpiar los archivos
clean:
	rm -f *.o

#Regla para limpiar todo, incluyendo la libreria
fclean: clean
	rm -f $(NAME)

#Regla para recompilar todo
re: fclean all

#Regla para añadir los archivos bonus a la compilacion de la libreria
bonus:
	ar rcs $(NAME) $(BONUS)

#Indicamos que estas reglas no son archivos
.PHONY: all clean fclean re bonus
