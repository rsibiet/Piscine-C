/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/13 12:20:50 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/13 23:04:35 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_lenght(int argc, char **argv);

int		ft_lenght(int argc, char **argv)
{
	int	i;
	int	j;
	int k;

	i = 0;
	j = 1;
	k = 0;
	while (argc > j)
	{
		while (argv[j][i] != '\0')
			i++;
		j++;
		k += 2;
		i = 0;
	}
	return (k);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 1;
	k = 0;
	ft_lenght(argc, argv);
	str = (char*)malloc(sizeof(*str) * k);
	k = 0;
	while (argc > j)
	{
		while (argv[j][i] != '\0')
		{
			str[k] = argv[j][i++];
			k++;
		}
		j++;
		str[k++] = '\n';
		i = 0;
	}
	str[k] = '\0';
	return (str);
}
