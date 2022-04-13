/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:11:37 by tlarraze          #+#    #+#             */
/*   Updated: 2022/02/19 10:16:17 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void ft_print_comb(void)
{
	int a;
	int b;
	int c;
	
	a = 48;
	b = 49;
	c = 50;
	while(a < 56)
	{
		while(b < 57 )
		{

			while(c < 58)
			{
				write(1,&a ,1);
				write(1,&b ,1);
				write(1,&c ,1);
				write (1, ",",1);			
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a;
	}
}
int	main(void)
{
	ft_print_comb();
}
// Important 1
// b = a +1
// c = b +1
