/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/08 20:17:45 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/09 18:02:17 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	declare_init_space(int size, int i[11]);
void	display_sastantua(int *size, int i[11]);
void	following_line(int i[11]);

void	following_line(int i[11])
{
	i[4] = i[5] + 2;
	ft_putchar('\\');
	ft_putchar('\n');
	i[0]--;
}

void	display_sastantua(int *size, int i[11])
{
	i[1] = 0;
	i[2]--;
	ft_putchar('/');
	if ((i[6] / 2) * 2 == i[6])
		i[8] = 1;
	else
		i[8] = 0;
	i[5] = i[4];
	while (i[4] > 0)
	{
		if (*size == 1 && i[0] <= (i[7] - 2 - i[8]) &&
				((i[4] - i[8]) >= (((i[5] + 1) / 2) - (i[6] / 2))
				&& (i[4] + i[8]) <= (((i[5] + 1) / 2) + (i[6] / 2))))
		{
			if ((i[6] > 4 && i[0] == (i[7] - 2 - i[8]) / 2 + 1 &&
					(i[4] - i[8]) == (((i[5] + 1) / 2) - (i[6] / 2) + 1)))
				ft_putchar('$');
			else
				ft_putchar('|');
		}
		else
			ft_putchar('*');
		i[4]--;
	}
}

void	declare_init_space(int size, int i[11])
{
	i[0] = 3;
	i[1] = 0;
	i[2] = 2;
	i[3] = 4;
	i[4] = 1;
	i[6] = size;
	i[7] = i[0];
	i[9] = 1;
	i[10] = 0;
	while (size > 1)
	{
		i[2] += i[3] + 2;
		i[3]++;
		if (size >= 4 && (size / 2) * 2 == size)
			i[3]++;
		size--;
	}
	if (i[6] >= 4 && (i[6] / 2) * 2 == i[6])
		i[2] -= ((i[6] - 2) / 2);
}

void	sastantua(int size)
{
	int i[11];

	declare_init_space(size, i);
	while (size > 0)
	{
		while (i[0] > 0)
		{
			while (i[1] < i[2])
			{
				ft_putchar(' ');
				i[1]++;
			}
			display_sastantua(&size, i);
			following_line(i);
		}
		i[0] = i[7] + 1;
		i[7] = i[0];
		size--;
		i[9]++;
		if (i[9] >= 4 && (i[9] / 2) * 2 == i[9])
			i[10]++;
		i[2] = i[2] - 2 - i[10];
		i[4] += 4 + (2 * i[10]);
	}
}
