/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/08 16:46:22 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/23 18:44:21 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

static int		first_end_line(char *d, int x, int i)
{
	d[i] = 'A';
	x--;
	i++;
	while (x > 1)
	{
		d[i] = 'B';
		x--;
		i++;
	}
	if (x == 1)
	{
		d[i] = 'C';
		i++;
	}
	d[i] = '\n';
	i++;
	return (i);
}

static int		next(char *d, int x, int i)
{
	int memo_x;

	memo_x = x;
	if (x > 0)
	{
		d[i] = 'B';
		i++;
	}
	x--;
	while (x > 1)
	{
		d[i] = ' ';
		i++;
		x--;
	}
	if (x == 1)
	{
		d[i] = 'B';
		i++;
	}
	d[i] = '\n';
	i++;
	x = memo_x;
	return (i);
}

static int		between_line(char *d, int x, int y, int i)
{
	while (y > 1)
	{
		i = next(d, x, i);
		y--;
	}
	return (i);
}

char			*colle03(int x, int y)
{
	char	*d;
	int		i;

	d = (char *)malloc(sizeof(char) * (x * y) + 1 + 1);
	i = 0;
	if (x > 0 && y > 0)
	{
		i = first_end_line(d, x, i);
		i = between_line(d, x, y - 1, i);
		if (y > 1)
			i = first_end_line(d, x, i);
	}
	d[i] = '\0';
	return (d);
}
