/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:09:05 by tlarraze          #+#    #+#             */
/*   Updated: 2022/02/19 12:14:27 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void)
{
//	char	'a';
//	char	'b';
//	char	'c';	
//	char	'd';
//	char	'e';
//	char	'f';
	char a = '0', b = '0', c = '0', d = '1', e = a* 10 + b, f = c* 10 + d;
//	'a' = '0';
//	'b' = '0';
//	'c' = '0';
//	'd' = '0';
	while(a < '9')
	{
		while(b < '9')
		{
			while(c < '9')
			{
				while(d < '9')
				{
				e = a * 10 +  b;
				f = c * 10 +  d;
				
					if (e == f)
					{
						}
					else
					{
					write(1, &a, 1);
					write(1, &b, 1);
					write(1, " ", 1);
					write(1, &c, 1);
					write(1, &d, 1);
					write(1, ", ", 2);
					}
				d++;
				d = c + 1;
				}
			c++;
			c = d;
			}
		b++;
		b = a + 1;
		}
	a++;
	a = b;
	}
}

int main(void)
{
	ft_print_comb2();
}
