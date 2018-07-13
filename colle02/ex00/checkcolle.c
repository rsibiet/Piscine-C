/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkcolle.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/23 12:11:41 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/23 19:48:46 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

int		ft_def_value(char *z)
{
	int x;
	int y;
	int i;

	i = 0;
	x = 0;
	y = 0;
	while (z[i])
	{
		if (z[i] == '\n')
			y++;
		i++;
	}
	i = 0;
	while (z[i] != '\n')
	{
		x++;
		i++;
	}
	ft_checkcolle(z, x, y);
	return (0);
}

void	next_next(char *z, int x, int y, int i)
{
	char	*cmp3;

	cmp3 = colle04(x, y);
	if (ft_strcmp(z, cmp3) == 0)
	{
		if (i == 1)
			ft_putstr(" || ");
		ft_putstr("[colle-04] ");
		ft_display(x, y);
		i = 1;
	}
	if (i == 0)
		ft_putstr("aucune");
}

void	next_check(char *z, int x, int y, int i)
{
	char	*cmp2;

	cmp2 = colle02(x, y);
	if (ft_strcmp(z, cmp2) == 0)
	{
		if (i == 1)
			ft_putstr(" || ");
		ft_putstr("[colle-02] ");
		ft_display(x, y);
		i = 1;
	}
	free(cmp2);
	cmp2 = colle03(x, y);
	if (ft_strcmp(z, cmp2) == 0)
	{
		if (i == 1)
			ft_putstr(" || ");
		ft_putstr("[colle-03] ");
		ft_display(x, y);
		i = 1;
	}
	next_next(z, x, y, i);
}

void	ft_checkcolle(char *z, int x, int y)
{
	char	*cmp;
	int		i;

	i = 0;
	cmp = colle00(x, y);
	if (ft_strcmp(z, cmp) == 0)
	{
		ft_putstr("[colle-00] ");
		ft_display(x, y);
		i = 1;
	}
	free(cmp);
	cmp = colle01(x, y);
	if (ft_strcmp(z, cmp) == 0)
	{
		if (i == 1)
			ft_putstr(" || ");
		ft_putstr("[colle-01] ");
		ft_display(x, y);
		i = 1;
	}
	next_check(z, x, y, i);
}
