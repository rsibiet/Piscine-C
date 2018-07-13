/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/14 10:17:00 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/14 13:55:37 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_display(char *a[3], int argc, char **argv, int j)
{
	int	sp;

	sp = 0;
	while (argv[argc][sp] == ' ')
		sp++;
	while (argv[argc][j + sp] == a[0][j] && a[0][j] != '\0')
		j++;
	if (j == 9)
		write(1, "Alert!!!\n", 9);
	j = 0;
	while (argv[argc][j + sp] == a[1][j] && a[1][j] != '\0')
		j++;
	if (j == 6)
		write(1, "Alert!!!\n", 9);
	j = 0;
	while (argv[argc][j + sp] == a[2][j] && a[2][j] != '\0')
		j++;
	if (j == 6)
		write(1, "Alert!!!\n", 9);
	sp = 0;
	return (0);
}

int	ft_test(char *a[3], int argc, char **argv)
{
	int		j;

	j = 0;
	ft_display(a, argc, argv, j);
	return (0);
}

int	main(int argc, char **argv)
{
	char	*a[3];

	a[0] = "president";
	a[1] = "attack";
	a[2] = "Powers";
	argc--;
	while (argc > 0)
	{
		ft_test(a, argc, argv);
		argc--;
	}
	return (0);
}
