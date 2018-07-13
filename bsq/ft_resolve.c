/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 22:20:17 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/25 15:43:53 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		test_square(t_pos *cur, t_move *move, t_params *par, char *c)
{
	t_move	ctrl;

	ctrl.x = move->x;
	ctrl.y = move->y;
	while (ctrl.y <= (move->y + cur->c_size))
	{
		while (ctrl.x <= (move->x + cur->c_size))
		{
			if (c[POS(ctrl.x, ctrl.y, par->length)] == par->obst)
			{
				move->x = ctrl.x + 1;
				return (0);
			}
			else
				ctrl.x++;
		}
		ctrl.x = move->x;
		ctrl.y++;
	}
	cur->pos = POS(move->x, move->y, par->length);
	return (1);
}

void	find_square(t_pos *cur, t_move *move, t_params *par, char *c)
{
	while (par->lines > cur->c_size)
	{
		while ((par->length - move->x) > cur->c_size)
		{
			if (c[POS(move->x, move->y, par->length)] == par->obst)
				move->x++;
			else if (test_square(cur, move, par, c) == 1)
				cur->c_size++;
		}
		move->x = 1;
		par->lines--;
		move->y++;
	}
	finish_him(cur, par, c);
}

void	ft_resolve(char *c, t_params *par)
{
	t_pos	cur;
	t_move	move;

	move.y = 1;
	move.x = 0;
	par->i = 0;
	while (c[par->i] != '\n')
		par->i++;
	par->i++;
	cur.pos = par->i;
	cur.c_size = 0;
	find_square(&cur, &move, par, c);
}
