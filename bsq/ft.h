/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/17 10:21:54 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/25 15:38:19 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define POS(x, y, LENGTH) (((y - 1) * (LENGTH + 1)) + x + par->i)
# define XPOS()

typedef struct	s_params
{
	int		lines;
	int		length;
	char	empty;
	char	obst;
	char	full;
	int		i;
}				t_params;

typedef struct	s_pos
{
	int		pos;
	int		c_size;
}				t_pos;

typedef struct	s_move
{
	int		x;
	int		y;
}				t_move;

int				ft_putchar(char c);

int				ft_putnbr(int nb);

void			ft_putstr(char *str);

int				ft_strcmp(char *s1, char *s2);

char			*ft_strcpy(char *dest, char *src);

char			*ft_strcat(char *dest, char *src);

int				ft_strlen(char *str);

char			*ft_strncpy(char *dest, char *src, unsigned int n);

int				ft_atoi(char *str);

int				ft_params(char *c);

int				check_map_bis(int i, int *ln, t_params *par, char *c);

int				check_map(t_params *par, char *c);

void			ft_open(int fd);

void			ft_read_std_input(void);

void			ft_resolve(char *c, t_params *par);

void			find_square(t_pos *cur, t_move *move, t_params *par, char *c);

int				test_square(t_pos *cur, t_move *move, t_params *par, char *c);

void			finish_him(t_pos *cur, t_params *par, char *c);

void			fatality(char *c);

#endif
