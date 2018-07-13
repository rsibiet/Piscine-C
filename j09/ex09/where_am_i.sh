# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    where_am_i.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/14 12:38:24 by rsibiet           #+#    #+#              #
#    Updated: 2015/08/14 12:44:25 by rsibiet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

var=$(ifconfig | grep "inet " | cut -d' ' -f2)
if test -z "$var"
then echo "Je suis perdu!\n"
else echo $var | tr ' ' '\n'
fi
