/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/12 15:57:48 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/12 16:17:16 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	while (nbr < i)
	{
		nbr = nbr % i;
		while (base[nbr] )
		{
		ft_putchar(nbr);
		}
	}

}
