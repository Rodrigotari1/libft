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
      ft_isalpha.c \
      ft_strcat.c \
      ft_strcmp.c \
      ft_strcpy.c \
      ft_strjoin.c \
      ft_strlen.c \
      strlcpy.c


OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
