NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c ft_swap.c ft_atoi.c ft_strdup.c ft_putnbr.c ft_strcpy.c ft_split.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)
fclean: clean
		rm -f $(NAME)

re: fclean all