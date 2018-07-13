/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <rsibiet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/13 22:11:15 by rsibiet           #+#    #+#             */
/*   Updated: 2015/08/13 22:27:33 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_bouton(int i, int j, int k)
{
	if ((j < i && i < k) || (k < i && i < j))
		return (i);
	if ((i < j && j < k) || (k < j && j < i))
		return (j);
	if ((i < k && k < j) || (j < k && k < i))
		return (k);
	return (0);
}