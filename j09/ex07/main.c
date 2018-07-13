/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/14 09:54:21 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/14 10:09:50 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base);
int	ft_putchar(char c);
int	ft_putnbr(int nb);

int	main(void)
{
	unsigned int i;
/*	unsigned int j;
*/
	i = 127;
/*	j = ft_collatz_conjecture(i);
*/	ft_putnbr(ft_collatz_conjecture(i));
}
