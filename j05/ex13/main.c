/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 10:18:11 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/12 12:08:15 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *dest, char *src);
void	ft_putnbr(int nb);
int 	ft_putchar(char c);

int		main(void)
{
	char c[100] = "de caractere.";
	char i[100] = "une chaine ";
	char *j;
	int nb;

	nb = 0;
	j = ft_strcat(i, c);
	while (i[nb] != '\0')
	{
		ft_putchar(j[nb]);
		nb++;
	}
	return (0);
}
