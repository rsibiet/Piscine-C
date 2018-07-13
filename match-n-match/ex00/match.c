/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 11:10:38 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/15 17:43:10 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	run_var(int *i, int *j, char *s1, char *s2)
{
	int j_memo;

	j_memo = 0;
	while ((s1[*i] != '\0' || s2[*j] != '\0') && (s1[*i] == s2[*j] ||
		s2[*j] == '*'))
	{
		if (s1[*i] == s2[*j])
		{
			(*j)++;
			(*i)++;
		}
		else if (s2[*j] == '*')
		{
			while (s2[*j] == '*')
				(*j)++;
			j_memo = *j;
			while (s2[*j] != s1[*i] && s1[*i] != '\0' && s2[*j] != '\0')
				(*i)++;
		}
	}
	return (j_memo);
}

int	match(char *s1, char *s2)
{
	int i;
	int j;
	int j_memo;

	i = 0;
	j = 0;
	j_memo = run_var(&i, &j, s1, s2);
	if (s1[i] != '\0')
	{
		j = j_memo;
		i++;
		while (s1[i] != s2[j] && s1[i] != '\0')
			i++;
		while (s1[i] == s2[j] && (s1[i] != '\0' || s2[j++] != '\0'))
			i++;
	}
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	return (0);
}
