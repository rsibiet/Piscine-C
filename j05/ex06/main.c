/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 10:18:11 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/11 19:36:49 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strlowcase(char *str);
void	ft_putnbr(int nb);
int 	ft_putchar(char c);

int		main(void)
{
	char c[9] = "78 D a w";
	char *str;
	str = ft_strlowcase(c);
	ft_putchar('\n');
	ft_putchar(str[0]);
	ft_putchar(str[1]);
	ft_putchar(str[2]);
	ft_putchar(str[3]);
	ft_putchar(str[4]);
	ft_putchar(str[5]);
	ft_putchar(str[6]);
	ft_putchar(str[7]);
	return (0);
}
