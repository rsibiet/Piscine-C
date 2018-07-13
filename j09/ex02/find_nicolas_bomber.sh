# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bomber.sh                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/14 14:34:03 by rsibiet           #+#    #+#              #
#    Updated: 2015/08/14 14:40:03 by rsibiet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cat $contacts_easy.txt | grep "Bomber" | grep -i "Nicolas" | grep -v "Anastacio" | awk -F '\t' '{print $33}' awk -F'[^0-9]*
