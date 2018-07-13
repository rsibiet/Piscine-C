/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 14:37:50 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/16 19:19:57 by rsibiet          ###   ########.fr       */
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

void	magic_find(char **argv, t_point *ptr, t_global *gb)
{
	int l;
	int j;
	int m;

	l = 49;
	j = 0;
	m = 0;
	while (l < 58)
	{
		while (argv[gb->i][j] != l && ptr->y[j] != l && ptr->zone[j] != l &&
				j < 10)
		{
			j++;
		}
		if (j == 10)
			gb->compare[m] = l;
		if (j == 10)
			m++;
		l++;
		j = 0;
	}
}

void	find_solution(t_global *gb)
{
	if (gb->solution[gb->pos] < gb->essai[gb->pos])
		(gb->solution[gb->pos])++;
	else
	{
		while (gb->solution[gb->pos] == gb->essai[gb->pos])
		{
			gb->solution[gb->pos] = 0;
			(gb->pos)--;
		}
		(gb->solution[gb->pos])++;
	}
}

void	search_last_point(t_memo *last_point, char **argv)
{
	while (argv[last_point->x][last_point->y] != '.' && (last_point->x) != 0)
	{
		(last_point->y)--;
		if (last_point->y == (-1))
		{
			last_point->y = 8;
			(last_point->x)--;
		}
	}
}

void	reset_for_retry(char **argv, t_global *gb)
{
	reset_argv(argv, gb);
	find_solution(gb);
	(gb->nbr)++;
	gb->pos = 0;
	gb->i = 1;
	gb->j = (-1);
	gb->q = 0;
	gb->memo_x = 0;
	gb->memo_y = 0;
}
