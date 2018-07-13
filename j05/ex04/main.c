/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 10:18:11 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/12 00:01:50 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);
void	ft_putnbr(int nb);
int 	ft_putchar(char c);

int		main(void)
{
	char c[9] = "abcde";
	char d[9] = "abcse";	
	int str2;
	int str;
	str2 = strncmp(d, c, 3);
	ft_putnbr(str2);
	ft_putchar('\n');
/*	ft_putchar(str2[0]);
	ft_putchar(str2[1]);
	ft_putchar(str2[2]);
	ft_putchar(str2[3]);
	ft_putchar(str2[4]);
	ft_putchar(str2[5]);
	ft_putchar(str2[6]);
	ft_putchar(str2[7]);
*/	str = ft_strncmp(d, c, 3);
	ft_putchar('\n');
	ft_putnbr(str);
/*	ft_putchar(str[0]);
	ft_putchar(str[1]);
	ft_putchar(str[2]);
	ft_putchar(str[3]);
	ft_putchar(str[4]);
	ft_putchar(str[5]);
	ft_putchar(str[6]);
	ft_putchar(str[7]);
*/	return (0);
}
