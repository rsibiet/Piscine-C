/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/08 20:01:21 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/23 18:43:40 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

static int		first_line(char *b, int x, int i)
{
	b[i] = '/';
	x--;
	i++;
	while (x > 1)
	{
		b[i] = '*';
		x--;
		i++;
	}
	if (x == 1)
	{
		b[i] = '\\';
		i++;
	}
	b[i] = '\n';
	i++;
	return (i);
}

static int		end_line(char *b, int x, int i)
{
	b[i] = '\\';
	i++;
	x--;
	while (x > 1)
	{
		b[i] = '*';
		x--;
		i++;
	}
	if (x == 1)
	{
		b[i] = '/';
		i++;
	}
	b[i] = '\n';
	i++;
	return (i);
}

static int		next(char *b, int x, int i)
{
	int memo_x;

	memo_x = x;
	if (x > 0)
	{
		b[i] = '*';
		i++;
	}
	x--;
	while (x > 1)
	{
		b[i] = ' ';
		i++;
		x--;
	}
	if (x == 1)
	{
		b[i] = '*';
		i++;
	}
	b[i] = '\n';
	i++;
	x = memo_x;
	return (i);
}

static int		between_line(char *b, int x, int y, int i)
{
	while (y > 1)
	{
		i = next(b, x, i);
		y--;
	}
	return (i);
}

char			*colle01(int x, int y)
{
	char	*b;
	int		i;

	b = (char *)malloc(sizeof(char) * (x * y) + 1 + 1);
	i = 0;
	if (x > 0 && y > 0)
	{
		i = first_line(b, x, i);
		i = between_line(b, x, y - 1, i);
		if (y > 1)
			i = end_line(b, x, i);
	}
	b[i] = '\0';
	return (b);
}
