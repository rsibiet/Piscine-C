/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/08 20:01:45 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/08 20:04:33 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	first_line(int x);
void	end_line(int x);
void	between_line(int x, int y);
int		ft_putchar(char c);

void	colle(int x, int y)
{
	if (x > 0 && y > 0)
	{
		first_line(x);
		between_line(x, y - 1);
		if (y > 1)
			end_line(x);
	}
}

void	first_line(int x)
{
	ft_putchar('A');
	x--;
	while (x > 1)
	{
		ft_putchar('B');
		x--;
	}
	if (x == 1)
		ft_putchar('A');
	ft_putchar('\n');
}

void	end_line(int x)
{
	ft_putchar('C');
	x--;
	while (x > 1)
	{
		ft_putchar('B');
		x--;
	}
	if (x == 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	between_line(int x, int y)
{
	int memo_x;

	memo_x = x;
	while (y > 1)
	{
		if (x > 0)
			ft_putchar('B');
		x--;
		while (x > 1)
		{
			ft_putchar(' ');
			x--;
		}
		if (x == 1)
			ft_putchar('B');
		ft_putchar('\n');
		y--;
		x = memo_x;
	}
}
