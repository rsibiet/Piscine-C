/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 10:18:11 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/12 11:11:34 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_str_is_lowercase(char *str);
void	ft_putnbr(int nb);
int 	ft_putchar(char c);

int		main(void)
{
	char c[9] = "abc dez";
	int i;
	i = ft_str_is_lowercase(c);
	ft_putnbr(i);
	return (0);
}
