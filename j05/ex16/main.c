/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 10:18:11 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/12 15:45:09 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void	ft_putnbr(int nb);
int 	ft_putchar(char c);

int		main(void)
{
	char c[100] = "World.";
	char i[100] = "Hello";
	unsigned int j;
	int nb;

	nb = 0;
	j = ft_strlcpy(i, c, 10);
	ft_putnbr(j);
	return (0);
}
