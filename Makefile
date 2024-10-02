# The name of the library
NAME = libft.a

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# List of source files
SRC = ft_atoi.c \
      ft_bzero.c \
      ft_memccpy.c \
      ft_memchr.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_memset.c \
      ft_putchar.c \
      ft_putstr.c \
      ft_str_is_alpha.c \
      ft_strcat.c \
      ft_strcmp.c \
      ft_strcpy.c \
      ft_strjoin.c \
      ft_strlen.c \
      strlcpy.c

# Object files (replace .c with .o in SRC)
OBJ = $(SRC:.c=.o)

# Rule to create the library
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

# Rule to compile each .c file into .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Default rule that gets called when you just type 'make'
all: $(NAME)

# Rule to clean up object files
clean:
	rm -f $(OBJ)

# Rule to clean everything, including the library
fclean: clean
	rm -f $(NAME)

# Rule to rebuild the project from scratch
re: fclean all

.PHONY: all clean fclean re
