# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/18 10:03:33 by rsibiet           #+#    #+#              #
#    Updated: 2015/08/25 15:45:54 by rsibiet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = ft_putstr.c \
	  ft_putchar.c \
	  ft_putnbr.c \
	  ft_strcpy.c \
	  ft_strcat.c \
	  ft_atoi.c \
	  ft_resolve.c \
	  terminator.c \
	  check.c \
	  main.c

FLAGS=-Wall -Werror -Wextra

OBJ=$(SRC:%.c=%.o)

All: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(FALGS) $^

%.o: %.c
	gcc -o $@ $(FLAGS) -c $<

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -rf $(NAME)

re: fclean All
