/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/17 10:21:54 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/23 17:41:45 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_checkcolle(char *z, int x, int y);

int		ft_putchar(char c);

int		ft_putnbr(int nb);

void	ft_putstr(char *str);

int		ft_strcmp(char *s1, char *s2);

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcat(char *dest, char *src);

int		ft_strlen(char *str);

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		ft_atoi(char *str);

char	*colle00(int x, int y);

char	*colle01(int x, int y);

char	*colle02(int x, int y);

char	*colle03(int x, int y);

char	*colle04(int x, int y);

int		ft_def_value(char *z);

void	ft_display(int x, int y);

#endif
