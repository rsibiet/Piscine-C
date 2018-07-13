/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/14 10:17:00 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/14 11:09:59 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int j;
	int sp;
	char *a;
	char *b;
	char *c;

	a = "president";
	b = "attack";
	c = "Powers";
	j = 0;
	sp = 0;
	argc--;
	while (argc > 0)
	{	
		while (argv[argc][sp] == ' ')
			sp++;
		while (argv[argc][j + sp] == a[j] && a[j] != '\0')
			j++;
		if (j == 9)
		{
			write (1, "Alert!!!\n", 9);
			return (0);
		}
		j = 0;
		while (argv[argc][j + sp] == b[j] && b[j] != '\0')
			j++;
		if (j == 6)
		{
			write (1, "Alert!!!\n", 9);
			return (0);
		}
		j = 0;
		while (argv[argc][j + sp] == c[j] && c[j] != '\0')
			j++;
		if (j == 6)
		{
			write (1, "Alert!!!\n", 9);
			return (0);
		}
		else
		{
			argc--;
			j = 0;
		}
	}
	return (0);
}
