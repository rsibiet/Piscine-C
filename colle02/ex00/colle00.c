/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/23 10:00:02 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/23 18:45:04 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

static int		first_end_line(char *a, int x, int i)
{
	a[i] = 'o';
	i++;
	x--;
	while (x > 1)
	{
		a[i] = '-';
		i++;
		x--;
	}
	if (x == 1)
	{
		a[i] = 'o';
		i++;
	}
	a[i] = '\n';
	i++;
	return (i);
}

static int		next(char *a, int x, int i)
{
	int memo_x;

	memo_x = x;
	if (x > 0)
	{
		a[i] = '|';
		i++;
	}
	x--;
	while (x > 1)
	{
		a[i] = ' ';
		i++;
		x--;
	}
	if (x == 1)
	{
		a[i] = '|';
		i++;
	}
	a[i] = '\n';
	i++;
	x = memo_x;
	return (i);
}

static int		between_line(char *a, int x, int y, int i)
{
	while (y > 1)
	{
		i = next(a, x, i);
		y--;
	}
	return (i);
}

char			*colle00(int x, int y)
{
	char	*a;
	int		i;

	a = ((char *)malloc(sizeof(char) * (x * y) + 1 + 1));
	i = 0;
	if (x > 0 && y > 0)
	{
		i = first_end_line(a, x, i);
		i = between_line(a, x, y - 1, i);
		if (y > 1)
			i = first_end_line(a, x, i);
	}
	a[i] = '\0';
	return (a);
}
