/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 14:37:50 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/16 19:24:31 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int nb);
int		ft_putchar(char c);
void	ft_putstr(char *str);

typedef	struct	s_global
{
	char	origin[9][10];
	int		essai[81];
	int		solution[81];
	int		i;
	int		j;
	int		cpy_i;
	int		cpy_j;
	int		k;
	int		q;
	int		l;
	int		kmaj;
	int		nbr;
	char	*compare;
	int		pos;
	int		memo_x;
	int		memo_y;
}				t_global;

typedef struct	s_point
{
	char	*x;
	char	y[10];
	char	zone[10];
}				t_point;

typedef struct	s_memo
{
	int x;
	int y;
}				t_memo;

int		solve_sudoku(int argc, char **argv, t_global *gb);
void	ft_display(int argc, char **argv);
void	copy_argv(char **argv, t_global *gb);
void	reset_argv(char **argv, t_global *gb);
void	point_position(char **argv, t_point *ptr, t_global *gb);
void	complet_ptr_zone(t_point *ptr, t_global *gb, char **argv);
void	define_ptr_zone(t_global *gb, t_point *ptr, char **argv);
void	val_ptr(t_point *ptr, char **argv, int argc, t_global *gb);
void	magic_find(char **argv, t_point *ptr, t_global *gb);
void	find_solution(t_global *gb);
void	search_last_point(t_memo *last_point, char **argv);
void	reset_for_retry(char **argv, t_global *gb);
void	final_master(char **argv, int argc, t_global *gb, t_point *ptr);
void	master(int argc, char **argv, t_memo *last_point, t_global *gb);
int		solve_sudoku(int argc, char **argv, t_global *gb);
int		control_argv(int argc, char **argv, int *control);
int		main(int argc, char **argv);

void	ft_display(int argc, char **argv)
{
	int n;
	int i;

	n = argc;
	n = 0;
	i = 1;
	while (i < argc)
	{
		while (argv[i][n] != '\0')
		{
			ft_putchar(argv[i][n]);
			n++;
			if (argv[i][n] != '\0')
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
		n = 0;
	}
}

void	copy_argv(char **argv, t_global *gb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			gb->origin[i][j] = argv[i + 1][j];
			j++;
		}
		gb->origin[i][j] = '\0';
		j = 0;
		i++;
	}
}

void	reset_argv(char **argv, t_global *gb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			argv[i + 1][j] = gb->origin[i][j];
			j++;
		}
		argv[i + 1][j] = '\0';
		j = 0;
		i++;
	}
}
