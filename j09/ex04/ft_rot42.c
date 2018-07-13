/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/13 21:37:43 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/13 22:05:29 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_rot42(char *str)
{
	char	*rot;
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	rot = (char*)malloc(sizeof(*rot) * i + 1);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 74 && str[i] >= 65)
			rot[i] = str[i] + 16;
		if (str[i] <= 90 && str[i] >= 65)
			rot[i] = 64 + (str[i] - 74);
		if (str[i] <= 122 && str[i] >= 97)
			rot[i] = 96 + (str[i] - 106);
		else
			rot[i] = str[i];
		i++;
	}
	return (rot);
}
