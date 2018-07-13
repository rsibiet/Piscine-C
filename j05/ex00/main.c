/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 10:18:11 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/11 11:27:20 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dest, char *src);
void	ft_putnbr(int nb);
int 	ft_putchar(char c);

int		main(void)
{
	char c[9] = "chaine1";
	char d[8] = "remy";	
	char e[9] = "chaine1";
	char f[8] = "remy";
	char *str;
	strcpy(d, c);
	ft_putchar('\n');
	ft_putchar(d[0]);
	ft_putchar(d[1]);
	ft_putchar(d[2]);
	ft_putchar(d[3]);
	ft_putchar(d[4]);
	ft_putchar(d[5]);
	ft_putchar(d[6]);
	ft_putchar(d[7]);
	str = ft_strcpy(f, e);
	ft_putchar('\n');
	ft_putchar(f[0]);
	ft_putchar(f[1]);
	ft_putchar(f[2]);
	ft_putchar(f[3]);
	ft_putchar(f[4]);
	ft_putchar(f[5]);
	ft_putchar(f[6]);
	ft_putchar(f[7]);


	return (0);
}
