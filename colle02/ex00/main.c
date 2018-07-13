/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/23 10:32:35 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/23 20:45:37 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 400000

void	ft_display(int x, int y)
{
	ft_putchar('[');
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
}

void	c_zero(char *c)
{
	if (c[0] == '\0')
		ft_putstr("[colle-00] [0] [0] || [colle-01] [0] [0] || [colle-02");
	if (c[0] == '\0')
		ft_putstr("] [0] [0] || [colle-03] [0] [0] || [colle-04] [0] [0]");
	else
		ft_def_value(c);
}

int		main(void)
{
	int		ret;
	char	*c;
	char	*temp;
	char	buffer[BUF_SIZE + 1];
	int		i;

	i = 0;
	c = malloc(1);
	c[0] = '\0';
	while (42)
	{
		ret = read(0, buffer, BUF_SIZE);
		if (ret == 0)
			break ;
		buffer[ret] = '\0';
		temp = c;
		c = (char *)malloc(sizeof(char) * ((i * BUF_SIZE) + ret + 1));
		ft_strcpy(c, temp);
		ft_strcat(c, buffer);
		i++;
		free(temp);
	}
	c_zero(c);
	ft_putchar('\n');
	return (0);
}
