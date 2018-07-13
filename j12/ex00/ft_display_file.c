/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/20 21:35:12 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/21 15:24:52 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "ft.h"
#include <unistd.h>

#define BUF_S 4096

void	ft_putstr_err(char *str, int len)
{
	write(2, str, len);
}

void	ft_putstr_fd(int fd, char *str)
{
	write(fd, str, ft_strlen(str));
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_S + 1];

	if (argc > 2)
		ft_putstr_err("Too many arguments.\n", 20);
	if (argc == 1)
		ft_putstr_err("File name missing.\n", 19);
	if (argc != 2)
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_err("open() failed\n", 14);
		return (0);
	}
	ret = read(fd, buf, BUF_S);
	buf[ret] = '\0';
	ft_putstr_fd(1, buf);
	close(fd);
	return (0);
}
