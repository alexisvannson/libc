# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avannson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 22:49:53 by avannson          #+#    #+#              #
#    Updated: 2024/11/10 22:52:59 by avannson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ft_display_file.c
OFILES = $(CFILES:.c=.o)
CFLAGS = -Wall -Wextra -Werror
NAME = ft_display_file

all: $(NAME)

$(NAME): $(OFILES)
	cc $(CFLAGS) -o $@ $^ 

clean:
	rm -f $(OFILES)

fclean: clean 
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY:  all clean fclean re
