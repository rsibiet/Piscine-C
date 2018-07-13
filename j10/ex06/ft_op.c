/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/19 20:34:36 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/19 20:34:37 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	plus(int a, int b)
{
	int c;

	c = a + b;
	return (c);
}

int	moins(int a, int b)
{
	int c;

	c = a - b;
	return (c);
}

int	div(int a, int b)
{
	int c;

	if (b == 0)
	{
		ft_putstr("Stop : division by zero");
		return (0);
	}
	c = a / b;
	return (c);
}

int	mult(int a, int b)
{
	int c;

	c = a * b;
	return (c);
}

int	mod(int a, int b)
{
	int c;

	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero");
		return (0);
	}
	c = a % b;
	return (c);
}
