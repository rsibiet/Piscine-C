/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/13 11:02:35 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/13 13:15:18 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*str;
	int		*null;

	i = 0;
	null = NULL;
	if (min >= max)
		return (null);
	str = (int*)malloc(sizeof(*str) * (max - min));
	while (i < (max - min))
	{
		str[i] = (min + i);
		i++;
	}
	str[i] = '\0';
	return (str);
}
