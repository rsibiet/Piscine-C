# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/18 10:03:33 by rsibiet           #+#    #+#              #
#    Updated: 2015/08/19 21:24:13 by rsibiet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = do_op.c ft_atoi.c ft_op.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_strlen.c

All: $(NAME)
$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	gcc do_op.o ft_atoi.o ft_op.o ft_putchar.o ft_putnbr.o ft_putstr.o ft_strlen.o -o $(NAME)


clean:
	rm -rf do_op.o ft_atoi.o ft_op.o ft_putchar.o ft_putnbr.o ft_putstr.o ft_strlen.o

fclean: clean
	rm -rf $(NAME)

re: fclean All
