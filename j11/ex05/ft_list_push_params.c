/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/20 14:14:24 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/20 18:30:25 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*temp;
	int		i;

	i = 1;
	temp = ft_create_elem((void *)0);
	if (ac == 1)
		return (NULL);
	while ((ac - 1) > 0)
	{
		if (i == 1)
		{
			list = ft_create_elem((void *)av[i]);
			list->next = NULL;
		}
		else
		{
			temp->next = list;
			list = ft_create_elem((void *)av[i]);
			list->next = temp->next;
		}
		i++;
		ac--;
	}
	return (list);
}
