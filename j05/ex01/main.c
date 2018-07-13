/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 10:18:11 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/11 22:31:48 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
void	ft_putnbr(int nb);
int 	ft_putchar(char c);

int		main(void)
{
	char c[] = "chaine1test";
	char d[] = "pouf";	
	char e[] = "chaine1test";
	char f[] = "pouf";
	char *str = malloc(100);;
	char *str2 = malloc(100);;
	int n;

	n = 1;
		strncpy(f, d, n);
		ft_strncpy(c, d, n);
		printf("fa\n");
		printf("test x: %d\n", strncmp(d, f, n));
	return (0);
}
