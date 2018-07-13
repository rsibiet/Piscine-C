/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 14:37:50 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/16 19:02:16 by rsibiet          ###   ########.fr       */
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

void	final_master(char **argv, int argc, t_global *gb, t_point *ptr)
{
	gb->q = 0;
	val_ptr(ptr, argv, argc, gb);
	magic_find(argv, ptr, gb);
	while (gb->compare[gb->essai[gb->pos]] > 48 &&
			gb->compare[gb->essai[gb->pos]] < 58)
		(gb->essai[gb->pos])++;
	if (gb->compare[gb->solution[gb->pos]] > 48 &&
			gb->compare[gb->solution[gb->pos]] < 58)
	{
		argv[gb->memo_x][gb->memo_y] = gb->compare[gb->solution[gb->pos]];
		while (gb->q <= gb->essai[gb->pos])
		{
			gb->compare[gb->q] = 0;
			gb->q++;
		}
		gb->q = 0;
		(gb->pos)++;
	}
	else if (gb->nbr < 300000)
		reset_for_retry(argv, gb);
	(gb->j)++;
}

void	master(int argc, char **argv, t_memo *last_point, t_global *gb)
{
	t_point	*ptr;

	gb->pos = 0;
	gb->i = 1;
	gb->j = 0;
	gb->memo_x = 0;
	gb->memo_y = 0;
	ptr = malloc(sizeof(*ptr) * 10);
	gb->compare = (char*)malloc(sizeof(gb->compare) * 10);
	while (gb->nbr < 300000 && (argv[last_point->x][last_point->y]) == '.')
	{
		while (gb->i < 10)
		{
			while (gb->j < 9)
				final_master(argv, argc, gb, ptr);
			gb->i++;
			gb->j = 0;
		}
	}
}

int		solve_sudoku(int argc, char **argv, t_global *gb)
{
	t_memo last_point;

	last_point.x = 9;
	last_point.y = 8;
	search_last_point(&last_point, argv);
	if ((last_point.x) == 0)
	{
		ft_display(argc, argv);
		return (0);
	}
	master(argc, argv, &last_point, gb);
	if (argv[9][8] != '.' && gb->nbr < 300000)
		ft_display(argc, argv);
	else
		ft_putstr("Erreur\n");
	return (0);
}

int		control_argv(int argc, char **argv, int *control)
{
	t_memo i;

	i.x = 1;
	i.y = 0;
	if (argc != 10)
		*control = 1;
	else
	{
		while ((i.x != 0 && argv[i.x][i.y] > 48 && argv[i.x][i.y] < 58) ||
				(i.x != 0 && argv[i.x][i.y] == '.'))
		{
			(i.y)++;
			if (i.y == 9)
			{
				i.y = 0;
				(i.x)++;
			}
			if (i.x == 10)
				i.x = 0;
		}
		if (i.x != 0)
			*control = 1;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	t_global	gb;
	int			i;
	int			control;

	i = 0;
	control = 0;
	gb.nbr = 1;
	while (i < 81)
	{
		gb.solution[i] = 0;
		gb.essai[i] = 0;
		i++;
	}
	control_argv(argc, argv, &control);
	if (control == 0)
	{
		copy_argv(argv, &gb);
		solve_sudoku(argc, argv, &gb);
	}
	else
		ft_putstr("Erreur\n");
	return (0);
}
