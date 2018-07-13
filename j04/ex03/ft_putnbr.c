/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/06 23:14:29 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/07 12:07:38 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int		i;
	int		temp;
	long	j;

	i = 0;
	j = 1;
	if (nb < 0)
		ft_putchar('-');
	while (j < 10000000000)
	{
		if (0 > nb)
		{
			temp = ((nb * (-1)) / (1000000000 / j) % 10 + '0');
			j *= 10;
		}
		else
		{
			temp = (nb / (1000000000 / j) % 10 + '0');
			j *= 10;
		}
		if (temp != '0')
			i = 1;
		if (i == 1)
			ft_putchar(temp);
	}
}
