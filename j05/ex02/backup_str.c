/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 11:50:48 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/11 17:24:56 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int index_str;
	int index_to_find;

	index_str = 0;
	index_to_find = 0;
	while (to_find[index_to_find] != '\0')
	{
		index_str++;
		while (to_find[index_to_find] == str[index_str - 1])
		{
			str[index_to_find] = to_find[index_to_find];
			index_to_find++;
			index_str++;
		}
	}
	while (str[index_str - 1] != '\0')
	{
		str[index_to_find] = str[index_str - 1];
		index_to_find++;
		index_str++;
	}
	str[index_to_find] = '\0';
	return (&str[0]);
}
