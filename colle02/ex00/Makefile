# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/18 10:03:33 by rsibiet           #+#    #+#              #
#    Updated: 2015/08/23 19:27:30 by rsibiet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
SRC = ft_putstr.c \
	  ft_putchar.c \
	  ft_putnbr.c \
	  checkcolle.c \
	  colle00.c \
	  colle01.c \
	  colle02.c \
	  colle03.c \
	  colle04.c \
	  ft_strcmp.c \
	  ft_strcpy.c \
	  ft_strcat.c \
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
