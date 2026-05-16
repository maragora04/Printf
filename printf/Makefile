# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/15 15:03:57 by mamendes          #+#    #+#              #
#    Updated: 2026/05/16 18:54:53 by mamendes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_puthex.c ft_putptr.c \
	ft_putunsigned.c handle_specifier.c ft_putnbr.c ft_strlen.c \

OBJ_FILES = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	cc -Wall -Werror -Wextra -c $(SRC) && ar rc $(NAME) $(OBJ_FILES)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re