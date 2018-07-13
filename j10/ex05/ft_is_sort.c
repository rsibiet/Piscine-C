/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/18 17:10:27 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/18 23:32:10 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int j;

	i = 0;
	while ((i + 1) < length)
	{
		j = f(tab[i], tab[i + 1]);
		if (j <= 0)
			i++;
		else
			i = length;
	}
	if (i == length)
		return (0);
	while ((i + 1) < length)
	{
		j = f(tab[i], tab[i + 1]);
		if (j >= 0)
			i++;
		else
			i = length;
	}
	if (i == length)
		return (0);
	return (1);
}
