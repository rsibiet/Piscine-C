/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/08 20:01:45 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/23 18:44:03 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

static int		first_line(char *c, int x, int i)
{
	c[i] = 'A';
	i++;
	x--;
	while (x > 1)
	{
		c[i] = 'B';
		i++;
		x--;
	}
	if (x == 1)
	{
		c[i] = 'A';
		i++;
	}
	c[i] = '\n';
	i++;
	return (i);
}

static int		end_line(char *c, int x, int i)
{
	c[i] = 'C';
	i++;
	x--;
	while (x > 1)
	{
		c[i] = 'B';
		i++;
		x--;
	}
	if (x == 1)
	{
		c[i] = 'C';
		i++;
	}
	c[i] = '\n';
	i++;
	return (i);
}

static int		next(char *c, int x, int i)
{
	int memo_x;

	memo_x = x;
	if (x > 0)
	{
		c[i] = 'B';
		i++;
	}
	x--;
	while (x > 1)
	{
		c[i] = ' ';
		i++;
		x--;
	}
	if (x == 1)
	{
		c[i] = 'B';
		i++;
	}
	c[i] = '\n';
	i++;
	x = memo_x;
	return (i);
}

static int		between_line(char *c, int x, int y, int i)
{
	while (y > 1)
	{
		i = next(c, x, i);
		y--;
	}
	return (i);
}

char			*colle02(int x, int y)
{
	char	*c;
	int		i;

	c = ((char *)malloc(sizeof(char) * (x * y) + 1 + 1));
	i = 0;
	if (x > 0 && y > 0)
	{
		i = first_line(c, x, i);
		i = between_line(c, x, y - 1, i);
		if (y > 1)
			i = end_line(c, x, i);
	}
	c[i] = '\0';
	return (c);
}
