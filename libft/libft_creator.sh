# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/12 17:55:18 by rsibiet           #+#    #+#              #
#    Updated: 2015/08/18 22:16:36 by rsibiet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c ft_fibonacci.c ft_find_next_prime.c ft_is_prime.c ft_iterative_factorial.c ft_iterative_power.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_sqrt.c ft_strcmp.c ft_strcpy.c ft_strlen.c ft_strncpy.c ft_strrev.c ft_swap.c ft_ultimate_div_mod.c ft_atoi.c
ar -rc libft.a ft_fibonacci.o ft_find_next_prime.o ft_is_prime.o ft_iterative_factorial.o ft_iterative_power.o ft_putchar.o ft_putnbr.o ft_putstr.o ft_sqrt.o ft_strcmp.o ft_strcpy.o ft_strlen.o ft_strncpy.o ft_strrev.o ft_swap.o ft_ultimate_div_mod.o ft_atoi.o
ranlib libft.a

rm ft_fibonacci.o
rm ft_find_next_prime.o
rm ft_is_prime.o
rm ft_iterative_factorial.o
rm ft_iterative_power.o
rm ft_putchar.o
rm ft_putnbr.o
rm ft_putstr.o
rm ft_sqrt.o
rm ft_strcmp.o
rm ft_strcpy.o
rm ft_strlen.o
rm ft_strncpy.o
rm ft_strrev.o
rm ft_swap.o
rm ft_ultimate_div_mod.o
rm ft_atoi.o
