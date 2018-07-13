/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/12 22:58:09 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/12 23:15:04 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int i;
	int j;
	char **temp;

	i = 0;
	j = 1;
	while (j < (argc - 1))
	{
		ft_putchar(j);
		while (argv[j][i] > argv[j + 1][i])
		{
			ft_putchar(j)
				while (argv[j + 1] != '\0')

			i++;
		}
		j++;
		i = 0;
		ft_putchar('\n');
	}
	return (0);
}
