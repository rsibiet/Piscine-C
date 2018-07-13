/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/17 15:15:43 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/17 15:35:13 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void		set_point(t_point *point)
{
		point->x = 4;
		point->y = 7;
}

int					main(void)
{
		t_point point;
		set_point(&point);
		ft_putchar('0' + point.x);
		ft_putchar('\n');
		ft_putchar('0' + point.y);
		ft_putchar('\n');
		return (0);
}
