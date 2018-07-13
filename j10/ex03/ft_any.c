/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/18 15:53:17 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/19 14:39:45 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int i;
	int j;

	i = 0;
	while (tab[i] != (void*)0)
	{
		j = f(tab[i]);
		if (j == 1)
			return (1);
		i++;
	}
	return (0);
}
