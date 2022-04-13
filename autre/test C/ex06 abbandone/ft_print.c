/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:22:55 by tlarraze          #+#    #+#             */
/*   Updated: 2022/02/20 13:15:06 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_01(void);
void	ft_02(void);

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	a = 49;
	b = 49;
	c = 48;
	d = 48;

	if (a + b == c + d )
		ft_02();
	else
		ft_01();
}

void	main(void)
{
void	ft_01();
void	ft_02();
}

void	ft_02(void)
{
	int	c;
	int	d;

	c = 48;
	d = 48;

//	if  ( c <= 57)
//	{
		while ( c <= 57)
		{
			while( d <= 57)
			{
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, ",",1);
			d++;
			}
		c++;
		c = d + 1;
		}
//	}
}

void	ft_01(void)
{
	int a;
	int	b;
	int	f;

	a = 48;
	b = 48;
 //	if (a <= 57)
//	{
	 	while(a <= 57)
	 	{
		 	while(b <= 57)
			{
			write(1, &a, 1);
			write(1, &b, 2);
			write(1, " ", 1);
			b++;
			f = a + b;
			}
		}
//	}
a++;
b = a + 1;
}
