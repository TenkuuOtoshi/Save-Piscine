/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_fill_inputs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmarin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 20:49:21 by thmarin           #+#    #+#             */
/*   Updated: 2022/02/27 11:13:59 by thmarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"rush01.h"

int	check_pov_values(char pov[4][5])
{
	int	hv;
	int	i;

	hv = 0;
	while (hv < 2)
	{
		i = 0;
		while (i < 4)
		{
			if (pov[hv][i] < '1' || pov[hv][i] > '4' || (pov[hv + 2][i] < '1')
				|| (pov[hv + 2][i] > '4'))
				return (0);
			if ((pov[hv][i] + pov[hv + 2][3 - i] > '4' + '1' )
				|| (pov[hv + 2][3 - i] + pov[hv][i] < '1' + '2' ))
				return (0);
			i++;
		}
		hv++;
	}
	return (1);
}

int	fill_pov_with_arg(char *input, char pov[4][5])
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (input[i])
	{
		if (input[i] >= '0' && input[i] <= '4')
		{
			pov[count / 4][count % 4] = input[i];
			if (count % 4 == 3)
			{
				pov[count / 4][count % 4 + 1] = '\0';
				printf("%s\n",pov[count / 4]);
			}
			count++;
		}
		i++;
	}
	return (count);
}
