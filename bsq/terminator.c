/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 10:41:57 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/25 15:08:32 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	finish_him(t_pos *cur, t_params *par, char *c)
{
	int		ln;
	int		i;

	ln = 0;
	while (ln < cur->c_size)
	{
		i = 0;
		while (i < cur->c_size)
		{
			c[cur->pos + i] = par->full;
			i++;
		}
		cur->pos = cur->pos + par->length + 1;
		ln++;
	}
	fatality(c);
}

void	fatality(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\n')
		i++;
	i++;
	while (c[i])
	{
		ft_putchar(c[i]);
		i++;
	}
}
