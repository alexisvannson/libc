CC = gcc
CFILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OFILES = $(CFILES:.c=.o)
INC = -I includes
CFLAGS = -Wall -Wextra -Werror $(INC)
NAME = libft.a


all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:  all clean fclean re
