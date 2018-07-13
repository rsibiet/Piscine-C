/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/13 18:07:36 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/13 18:39:38 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 24)
		hour = 0;
	if (hour >= 0 && hour < 12)
	{
		if (hour == 0)
			printf("12.00 A.M. AND 01.00 A.M.\n");
		else if (hour == 11)
			printf("11.00 A.M. AND 12.00 P.M.\n");
		else
			printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
	}
	if (hour >= 12 && hour < 24)
	{
		if (hour == 12)
			printf("12.00 P.M. AND 01.00 P.M.\n");
		else if (hour == 23)
			printf("11.00 P.M. AND 12.00 A.M.\n");
		else
			printf("%d.00 P.M. AND %d.00 P.M.\n", hour - 12, hour + 11);
	}
}
