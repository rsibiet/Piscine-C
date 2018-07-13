/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/08 20:06:55 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/23 18:44:35 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

static int		first_line(char *e, int x, int i)
{
	e[i] = 'A';
	i++;
	x--;
	while (x > 1)
	{
		e[i] = 'B';
		i++;
		x--;
	}
	if (x == 1)
	{
		e[i] = 'C';
		i++;
	}
	e[i] = '\n';
	i++;
	return (i);
}

static int		end_line(char *e, int x, int i)
{
	e[i] = 'C';
	i++;
	x--;
	while (x > 1)
	{
		e[i] = 'B';
		i++;
		x--;
	}
	if (x == 1)
	{
		e[i] = 'A';
		i++;
	}
	e[i] = '\n';
	i++;
	return (i);
}

static int		next(char *e, int x, int i)
{
	int memo_x;

	memo_x = x;
	if (x > 0)
	{
		e[i] = 'B';
		i++;
	}
	x--;
	while (x > 1)
	{
		e[i] = ' ';
		i++;
		x--;
	}
	if (x == 1)
	{
		e[i] = 'B';
		i++;
	}
	e[i] = '\n';
	i++;
	x = memo_x;
	return (i);
}

static int		between_line(char *e, int x, int y, int i)
{
	while (y > 1)
	{
		i = next(e, x, i);
		y--;
	}
	return (i);
}

char			*colle04(int x, int y)
{
	char	*e;
	int		i;

	e = (char *)malloc(sizeof(char) * (x * y) + 1 + 1);
	i = 0;
	if (x > 0 && y > 0)
	{
		i = first_line(e, x, i);
		i = between_line(e, x, y - 1, i);
		if (y > 1)
			i = end_line(e, x, i);
	}
	e[i] = '\0';
	return (e);
}
