/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/07 23:12:28 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/07 23:30:50 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_n_putchar(int i, int j, int k, int l)
{
	ft_putchar(i + '0');
	ft_putchar(j + '0');
	ft_putchar(' ');
	ft_putchar(k + '0');
	ft_putchar(l + '0');
	if (i != 9 || j != 8)
		ft_putchar(',');
	if (i != 9 || j != 8)
		ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	j = 0;
	k = 0;
	l = 1;
	while (!(i == 9 && j == 9))
	{
		ft_n_putchar(i, j, k, l);
		l++;
		if ((l = l % 10) == 0)
		{
			k++;
		if (k > 9)
			j++;
			if ((j = j % 10) == 0)
				i++;
			k = i;
			l = j + 1;
		}
	}
}
