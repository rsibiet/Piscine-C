/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 10:18:11 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/12 17:38:23 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_str_is_numeric(char *str);
void	ft_putnbr(int nb);
int 	ft_putchar(char c);

int		main(void)
{
	char c[100] = "-1234567890";
	int i;
	i = ft_str_is_numeric(c);
	ft_putnbr(i);
	return (0);
}
