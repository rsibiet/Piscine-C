/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 10:18:11 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/13 11:44:46 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
int		ft_putchar(char c);

int		*ft_range(int min, int max);

int		main(void)
{
	int *b;

	b = ft_range(6, 9);
	ft_putchar(b[0] + 48);
	ft_putchar(b[1] + 48);
	ft_putchar(b[2] + 48);
	ft_putchar(b[3] + 48);
	ft_putchar(b[4] + 48);
	ft_putchar(b[5] + 48);
	return (0);
}
