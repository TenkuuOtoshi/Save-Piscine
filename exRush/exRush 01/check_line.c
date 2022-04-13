/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmarin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 10:58:14 by thmarin           #+#    #+#             */
/*   Updated: 2022/02/26 23:19:35 by thmarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"rush01.h"

int	dual_check(char c, char tab[4][4], int line, int col)
{
	int	v;
	int	h;

	v = 0;
	h = 0;
	while (v < 4)
	{
		if (c == tab[line][v] && v != col)
			return (0);
		v++;
	}
	while (h < 4)
	{
		if (c == tab[h][col] && h != line)
			return (0);
		h++;
	}
	return (1);
}

