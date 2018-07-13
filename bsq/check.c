/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 20:35:25 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/25 09:43:06 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int		ft_params(char *c)
{
	t_params	par;
	int			i;
	char		nb[11];

	i = 0;
	while (c[i] >= '0' && c[i] <= '9')
	{
		nb[i] = c[i];
		i++;
	}
	par.lines = ft_atoi(nb);
	par.empty = c[i];
	par.obst = c[i + 1];
	par.full = c[i + 2];
	par.length = 0;
	if (check_map(&par, c) == -1)
		return (-1);
	ft_resolve(c, &par);
	return (0);
}

int		check_map_bis(int i, int *ln, t_params *par, char *c)
{
	int		x;

	x = 0;
	(*ln)++;
	i++;
	while (c[i] == '\n' || c[i] == par->empty || c[i] == par->obst)
	{
		if (c[i] == '\n')
		{
			(*ln)++;
			if (x != par->length)
				return (-1);
			x = -1;
		}
		i++;
		x++;
	}
	return (0);
}

int		check_map(t_params *par, char *c)
{
	int		i;
	int		ln;

	ln = 0;
	i = 0;
	while (c[i] != '\n')
		i++;
	i++;
	while (c[i] != '\n' || c[i] == par->empty || c[i] == par->obst)
	{
		par->length++;
		i++;
	}
	if (check_map_bis(i, &ln, par, c) == -1)
		return (-1);
	if (ln != par->lines)
		return (-1);
	return (0);
}
