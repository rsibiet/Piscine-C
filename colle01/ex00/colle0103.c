/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 14:37:50 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/16 19:24:12 by rsibiet          ###   ########.fr       */
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

void	point_position(char **argv, t_point *ptr, t_global *gb)
{
	while (ptr->x[gb->j] != '.')
		(gb->j)++;
	if (gb->j > 9 && gb->i < 9)
	{
		gb->j = 0;
		(gb->i)++;
		gb->cpy_i = gb->i;
		gb->cpy_j = gb->j;
		ptr->x = argv[gb->i];
		gb->memo_x = gb->i;
		while (ptr->x[gb->j] != '.')
			(gb->j)++;
	}
}

void	complet_ptr_zone(t_point *ptr, t_global *gb, char **argv)
{
	while (gb->k < gb->kmaj)
	{
		while (gb->j < gb->l)
		{
			ptr->zone[gb->i] = argv[gb->k][gb->j];
			(gb->i)++;
			(gb->j)++;
		}
		gb->j = gb->l - 3;
		gb->k++;
	}
}

void	define_ptr_zone(t_global *gb, t_point *ptr, char **argv)
{
	gb->i = 0;
	if (gb->j > 5)
		gb->j = 6;
	else if (gb->j < 3)
		gb->j = 0;
	else
		gb->j = 3;
	gb->l = gb->j + 3;
	if (gb->cpy_i > 6)
		gb->k = 7;
	else if (gb->cpy_i < 4)
		gb->k = 1;
	else
		gb->k = 4;
	gb->kmaj = gb->k + 3;
	complet_ptr_zone(ptr, gb, argv);
	ptr->zone[gb->i] = '\0';
}

void	val_ptr(t_point *ptr, char **argv, int argc, t_global *gb)
{
	gb->cpy_i = gb->i;
	gb->cpy_j = gb->j;
	if (ptr)
	{
		ptr->x = argv[gb->i];
		gb->memo_x = gb->i;
		point_position(argv, ptr, gb);
		(gb->i) = 1;
		while (gb->i < argc)
		{
			ptr->y[(gb->i) - 1] = argv[gb->i][gb->j];
			(gb->i)++;
		}
		gb->memo_y = gb->j;
		gb->cpy_j = gb->j;
		ptr->y[gb->i - 1] = '\0';
		define_ptr_zone(gb, ptr, argv);
	}
	gb->i = gb->cpy_i;
	gb->j = gb->cpy_j;
}
