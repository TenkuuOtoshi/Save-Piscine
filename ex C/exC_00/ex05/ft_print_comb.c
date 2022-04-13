/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:11:37 by tlarraze          #+#    #+#             */
/*   Updated: 2022/02/23 13:13:42 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_4print(int a, int b, int c);

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	b = 49;
	c = 50;
	while (a < 56)
	{
		while (b < 57 )
		{
			while (c < 58)
			{
				ft_4print(a, b, c);
				if (a != '7')
					write(1, ",", 1);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a;
	}
}

void	ft_4print(int a, int b, int c)
{
	write(1, " ", 1);
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}
