/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/23 10:32:35 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/25 15:41:09 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 400000

void	ft_open(int fd)
{
	int		i;
	char	*c;
	char	file;

	i = 0;
	while (read(fd, &file, 1))
		i++;
	lseek(fd, -i, SEEK_END);
	c = (char *)malloc(sizeof(char) * i + 1);
	i = 0;
	while (read(fd, &file, 1))
	{
		c[i] = file;
		i++;
	}
	c[i] = '\0';
	if (ft_params(c) == -1)
		ft_putstr("map error.\n");
}

void	ft_read_std_input(void)
{
	int		ret;
	char	*c;
	char	*temp;
	char	buffer[BUF_SIZE + 1];
	int		i;

	i = 0;
	c = malloc(1);
	c[0] = '\0';
	while (42)
	{
		ret = read(0, buffer, BUF_SIZE);
		if (ret == 0)
			break ;
		buffer[ret] = '\0';
		temp = c;
		c = (char *)malloc(sizeof(char) * ((i * BUF_SIZE) + ret + 1));
		ft_strcpy(c, temp);
		ft_strcat(c, buffer);
		i++;
		free(temp);
	}
	if (ft_params(c) == -1)
		ft_putstr("map error\n");
}

int		main(int ac, char **av)
{
	int		i;
	int		fd;

	i = 1;
	if (ac == 1)
		ft_read_std_input();
	while (i < ac)
	{
		fd = open(av[i], O_RDONLY);
		if (fd < 0)
			return (0);
		ft_open(fd);
		close(fd);
		i++;
	}
	return (0);
}
