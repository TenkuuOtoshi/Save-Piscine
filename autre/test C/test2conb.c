/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2conb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:23:25 by tlarraze          #+#    #+#             */
/*   Updated: 2022/02/19 19:00:51 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print2c(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 48;
	b = 48;
	c = 48;
	d = 48;

		if (a + b < c + d)
		{
			while (a < 58)
			{
				while (b < 58)
				{
					write(1, &a, 1);
					write(1, &b, 1);
					write(1, ", ", 2);
					b++;
				}
				a++;
				b = a;
			}
		}	
		else (a + b > c + d)
		{
			while (c < 58)
			{
				while (d < 58)
				{
					write(1, &c, 1);
					write(1, &d, 1);
					d++;
				}
				c++;
				c = d;
			}
		}
}


void main(void)
{
	print2c();
}
