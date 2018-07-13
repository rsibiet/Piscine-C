/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/20 19:03:48 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/20 19:26:37 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*nx;
	t_list	*prev;
	t_list	*cur;

	prev = NULL;
	cur = *begin_list;
	while (cur)
	{
		nx = cur->next;
		cur->next = prev;
		prev = cur;
		cur = nx;
	}
	*begin_list = prev;
}
