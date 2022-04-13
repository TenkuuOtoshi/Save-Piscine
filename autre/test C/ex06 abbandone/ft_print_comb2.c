/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:19:07 by tlarraze          #+#    #+#             */
/*   Updated: 2022/02/20 11:25:30 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;
	int f;
	a = '0';
	b = '0';
	c = '0';
	d = '0';

	if (a <= '9')
	{
		while(a <= '9')
		{
			while(b <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 2);
				write(1, ",,,", 1);
				b++;
				f = a + b;
			}
		}
	}
	a++;
	b = a + 1;
	if ( c <= '9')
	{
		while(c <= '9')
		{
			while(d <= '9')
			{
			write(1, &c, 1);
			write(1, &d, 1);
				if (c = '9', d = '9')
				{
				c = '0';
				d = '0';
				f + '1';
				}
			d++;
			}
		c++;
		}
	}
}


int main(void)
{
	ft_print_comb2();
}

