/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/06 14:04:57 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/07 22:56:26 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_final_print_comb(int i, int j, int k)
{
	ft_putchar(i + 48);
	ft_putchar(j + 48);
	ft_putchar(k + 48);
	if (i != 7)
		ft_putchar(',');
	if (i != 7)
		ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 1;
	k = 2;
	while (i <= 7)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				ft_final_print_comb(i, j, k);
				k++;
			}
			k = j++ + 2;
		}
		j = i++ + 1;
	}
}
