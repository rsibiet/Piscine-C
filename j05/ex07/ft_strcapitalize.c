/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 19:52:09 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/12 23:34:13 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int b;

	i = 1;
	b = i - 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (str[b] >= ' ' && str[b] <= '/' && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		if (str[b] >= ':' && str[b] <= '@' && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		if (str[b] >= '[' && str[b] <= '`' && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		if (str[b] >= '{' && str[b] <= '~' && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
		b++;
	}
	return (str);
}
