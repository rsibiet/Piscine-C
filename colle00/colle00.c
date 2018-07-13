/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/08 19:21:09 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/08 19:23:21 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	first_end_line(int x);
void	between_line(int x, int y);
int		ft_putchar(char c);

void	colle(int x, int y)
{
	if (x > 0 && y > 0)
	{
		first_end_line(x);
		between_line(x, y - 1);
		if (y > 1)
			first_end_line(x);
	}
}

void	first_end_line(int x)
{
	ft_putchar('o');
	x--;
	while (x > 1)
	{
		ft_putchar('-');
		x--;
	}
	if (x == 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void	between_line(int x, int y)
{
	int memo_x;

	memo_x = x;
	while (y > 1)
	{
		if (x > 0)
			ft_putchar('|');
		x--;
		while (x > 1)
		{
			ft_putchar(' ');
			x--;
		}
		if (x == 1)
			ft_putchar('|');
		ft_putchar('\n');
		y--;
		x = memo_x;
	}
}
