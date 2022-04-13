/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:14:39 by tlarraze          #+#    #+#             */
/*   Updated: 2022/02/19 16:16:17 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int a;
	int b;
	a = 0;
	b = 0;
	while (b < y)
	{
		if (b == 0 || b == y - 1 )
		{
			while (a < x) 
			{
				if (a == 0)
					ft_putchar('A');
				else if (a == x - 1)
					ft_putchar('C');
				else
					ft_putchar('B');
				a++;
		
			}
		}
		else
		{
			while (a < x )
			{
				if (a == 0 || a == x - 1 )
					ft_putchar('B');
				else
					ft_putchar(' ');
				a++;
			}
		}
		ft_putchar('\n');
		b++;
		a = 0;
	}
}

int	main(void)
{
	rush(5,5);
	return (0);
}
