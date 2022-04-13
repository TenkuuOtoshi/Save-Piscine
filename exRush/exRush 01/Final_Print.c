/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Final_Print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:17:53 by tlarraze          #+#    #+#             */
/*   Updated: 2022/02/26 23:18:45 by thmarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"rush01.h"

void	ft_putchar(char c);

int	final_print(char tab[4][4])
{
	int	h;
	int	v;

	h = 0;
	while (h < 4)
	{
		v = 0;
		while (v < 4)
		{
			ft_putchar(tab[h][v]);
			if (v < 3)
				ft_putchar(' ');
			v++;
		}
		ft_putchar('\n');
		h++;
	}	
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
