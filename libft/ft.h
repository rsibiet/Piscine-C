/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/17 10:21:54 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/18 22:18:57 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putchar(char c);

int		ft_putnbr(int nb);

void	ft_putstr(char *str);

int		ft_sqrt(int nb);

int		ft_strcmp(char *s1, char *s2);

char	*ft_strcpy(char *dest, char *src);

int		ft_strlen(char *str);

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strrev(char *str);

char	*ft_strstr(char *str, char *to_find);

void	ft_swap(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b);

int		ft_fibonacci(int index);

int		ft_find_next_prime(int nb);

int		ft_is_prime(int nb);

int		ft_iterative_factorial(int nb);

int		ft_iterative_power(int nb, int power);

int		ft_atoi(char *str);

#endif
