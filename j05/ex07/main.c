/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 10:18:11 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/12 23:01:25 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcapitalize(char *str);
void	ft_putnbr(int nb);
int 	ft_putchar(char c);

int		main(void)
{
	char c[29] = "un	teSt+dE-caractere";
	char *str;
	int i;

	i = 0;
	str = ft_strcapitalize(c);
	ft_putchar('\n');
	while (i < 21)
	{
	ft_putchar(str[i]);
	i++;
	}
	return (0);
}
