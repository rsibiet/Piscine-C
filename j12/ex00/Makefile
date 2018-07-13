# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/18 10:03:33 by rsibiet           #+#    #+#              #
#    Updated: 2015/08/21 15:04:14 by rsibiet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ft_display_file.c ft_strlen.c

All: $(NAME)
$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	gcc ft_display_file.o ft_strlen.o -o $(NAME)


clean:
	rm -rf ft_display_file.o ft_strlen.o

fclean: clean
	rm -rf $(NAME)

re: fclean All
