/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/13 11:28:43 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/13 22:56:30 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*str;

	i = 0;
	if (min >= max)
	{
		str = NULL;
		*range = str;
		return (0);
	}
	str = (int*)malloc(sizeof(*str) * (max - min + 1));
	while (i < (max - min))
	{
		str[i] = (min + i);
		i++;
	}
	*range = str;
	return (i);
}
