/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_fill_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirabaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 18:05:27 by pirabaud          #+#    #+#             */
/*   Updated: 2022/02/27 11:43:24 by thmarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	fill_tab_with_zero(char tab[4][4])
{
	int i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
			tab[i][j++] = '0';
		i++;
	}
}


int	check_tab(char tab[4][4], int bottop, int line, char pov[4][5])
{
	int	i;
	int	cas1;
	int	line_input;

	line_input = line;
	i = -1;
	while (++i < 4)
	{
		if (pov[bottop][i] == '4')
		{
			cas1 = '1';
			while (line < 4)
			{
				tab[line][i] = cas1;
				line++;
				cas1++;
			}
			line = line_input;
		}
		if ((pov[bottop][i] == '3') && (tab[line][i] == '0'))
		{
			tab[line][i] = '2';
			if (dual_check(tab[line][i], tab, line, i) == 0)
				tab[line][i] = '1';
		}
		if ((pov[bottop][i] == '2') && (tab[line][i] == '0'))
		{
			tab[line][i] = '3';
			if (dual_check(tab[line][i], tab, line, i) == 0)
				tab[line][i] = '2';
			if (dual_check(tab[line][i], tab, line, i) == 0)
				tab[line][i] = '1';
		}
		if (pov[bottop][i] == '1')
			tab[line][i] = '4';
	}
	return (1);
}

int	check_tab_sidel(char tab[4][4], int pv, int y, char pov[4][5])
{
	int	i;
	int	cas1;
	i = -1;
	while (++i < 3)
	{
		if (pov[pv][i] == '4')
			cas1 = '1';
		while (i < 4)
		{
			tab[i][y] = cas1;
			i++;
			cas1++;
		}
		if (pov[pv][i] == '3')
		{
			tab[i][y] = '2';
			if (dual_check(tab[i][y], tab, y, i) == 0)
				tab[i][y] = '1';
		}
		if (pov[pv][i] == '2')
		{
			tab[i][y] = '3';
			if (dual_check(tab[i][y], tab, y, i) == 0)
				tab[i][y] = '2';
			if (dual_check(tab[i][y], tab, y, i) == 0)
				tab[i][y] = '1';
		}
		if (pov[pv][i] == '1')
			tab[i][y] = '4';
	}
	return (1);
}
