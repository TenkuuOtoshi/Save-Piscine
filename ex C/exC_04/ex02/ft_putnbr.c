/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:13:20 by tlarraze          #+#    #+#             */
/*   Updated: 2022/03/10 13:10:36 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr2(int nb);

void	ft_putnbr(int nb)
{
	if (nb != 0)
		ft_putnbr2(nb);
	else
		ft_putchar(nb + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr2(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		write(1, "147483648", 9);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}		
	if (nb > 0)
	{
		ft_putnbr2(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}
