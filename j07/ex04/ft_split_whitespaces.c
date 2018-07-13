/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/13 15:38:47 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/14 15:31:51 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_copy(char *str, char **ch)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] != '\n' && str[i] != '\t' &&
				str[i] != ' ')
		{
			ch[j][k] = str[i];
			i++;
			k++;
		}
		ch[j][k] = '\0';
		j++;
		i++;
	}
	return (ch);
}

char	**ft_alloc(char *str, char **ch)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 1;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] != '\n' && str[i] != '\t' &&
			str[i] != ' ')
		{
			i++;
			k++;
			ch[j] = (char *)malloc(sizeof(char) * k);
		}
		k = 1;
		i++;
		j++;
	}
	ch[j] = (char *)malloc(sizeof(char) * 1);
	return (ch);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**ch;

	i = 0;
	j = 0;
	k = 1;
	ch = NULL;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] != '\n' && str[i] != '\t' &&
			str[i] != ' ')
			i++;
		i++;
		k++;
	}
	ch = (char **)malloc(sizeof(char*) * (k + 1));
	ch[k] = NULL;
	ft_alloc(str, ch);
	ft_copy(str, ch);
	return (ch);
}
