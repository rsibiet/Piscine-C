/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/19 20:34:25 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/19 21:41:32 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

typedef int		(*t_do_op)(int, int);

int		get_op(char *argv)
{
	int		i;
	char	oop[5];

	oop[0] = '+';
	oop[1] = '-';
	oop[2] = '/';
	oop[3] = '*';
	oop[4] = '%';
	if (ft_strlen(argv) != 1)
		ft_putchar('0');
	if (ft_strlen(argv) != 1)
		return (-1);
	i = 0;
	while (i <= 4 && argv[0] != oop[i])
		i++;
	if (i == 5)
		ft_putchar('0');
	if (i == 5)
		return (-1);
	return (i);
}

int		main(int argc, char **argv)
{
	int			c;
	int			a;
	t_do_op		op[5];
	t_do_op		f;

	if (argc != 4)
		return (0);
	c = get_op(argv[2]);
	if (c == -1)
		ft_putchar('\n');
	if (c == -1)
		return (0);
	op[0] = &plus;
	op[1] = &moins;
	op[2] = &div;
	op[3] = &mult;
	op[4] = &mod;
	f = op[c];
	a = f(ft_atoi(argv[1]), ft_atoi(argv[3]));
	if ((argv[3] == 0 && c == 2) || (argv[3] == 0 && c == 4))
		return (0);
	ft_putnbr(a);
	ft_putchar('\n');
	return (0);
}
