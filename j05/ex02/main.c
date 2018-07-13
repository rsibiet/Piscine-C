/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 10:18:11 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/11 22:51:46 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find);
void	ft_putnbr(int nb);
int 	ft_putchar(char c);

int		main(void)
{
/*	char *c = NULL;
	char d[10] = "rhcchmid";	
*/	char e[] = "ch";
	char f[10] = "rhcchmid";
	char *str;
/*	char *str2;
	str2 = strstr(d, c);
	ft_putchar('\n');
	ft_putchar(str2[0]);
	ft_putchar(str2[1]);
	ft_putchar(str2[2]);
	ft_putchar(str2[3]);
	ft_putchar(str2[4]);
	ft_putchar(str2[5]);
*/	str = ft_strstr(f, e);
	ft_putchar('\n');
	ft_putchar(str[0]);
	ft_putchar(str[1]);
	ft_putchar(str[2]);
	ft_putchar(str[3]);
	ft_putchar(str[4]);
	ft_putchar(str[5]);
	return (0);
}
