/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/18 15:35:46 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/19 14:37:54 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *j;

	i = 0;
	j = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		j[i] = f(tab[i]);
		i++;
	}
	return (j);
}
