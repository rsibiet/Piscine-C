/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/20 15:14:37 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/20 18:34:02 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*nieme;
	unsigned int	i;

	i = 0;
	nieme = begin_list;
	if (nieme)
	{
		while (i < nbr && nieme->next)
		{
			nieme = nieme->next;
			i++;
		}
		return (nieme);
	}
	return (NULL);
}
