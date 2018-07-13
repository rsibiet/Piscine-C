/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 10:18:11 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/13 21:30:34 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
int		ft_putchar(char c);

char	**ft_split_whitespaces(char *str);

int		main(void)
{
	char **ptr;
	char *str;

	str = "une chaine de caracteres";
	ptr = ft_split_whitespaces("une chaine caracteres");
	ft_putstr(str);
	ft_putchar('\n');
	ft_putchar(ptr[0][0]);
	ft_putchar(ptr[1][0]);
	ft_putchar(ptr[2][0]);
	ft_putchar(ptr[3][0]);
	return (0);
}
