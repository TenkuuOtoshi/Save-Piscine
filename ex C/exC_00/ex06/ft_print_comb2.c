/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:10:23 by tlarraze          #+#    #+#             */
/*   Updated: 2022/02/23 13:14:40 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(char c);

void	ft_modu(char c)
{
	ft_putchar((c / 10) + 48);
	ft_putchar((c % 10) + 48);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a < 99 || a < b)
	{
		while (b <= 99)
		{
			ft_putchar(' ');
			ft_modu(a);
			ft_putchar(' ');
			ft_modu(b);
			if (a == 98)
			{
			}
			else
			{		
				ft_putchar(',');
			}			
			b++;
		}
		a++;
		b = a + 1;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
