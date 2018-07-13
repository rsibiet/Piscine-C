/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/13 22:23:21 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/14 14:21:51 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_max(int *tab, int lenght);

int	main()
{
	int a;
	int tab[6];

	tab[0] = 11;
	tab[1] = 10;
	tab[2] = 9;
	tab[3] = 45;
	tab[4] = 4;
	tab[5] = 99;

	a = ft_max(tab, 6);
	ft_putnbr(a);
	return (0);
}
