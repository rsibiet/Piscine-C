/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 11:31:26 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/16 09:57:24 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	match(char *s1, char *s2);

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

int	main(void)
{
	int i;

	i = match("un test", "*t");
	ft_putchar(i + 48);
	return (0);
}
