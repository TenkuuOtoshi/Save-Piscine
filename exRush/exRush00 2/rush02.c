/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:41:34 by tlarraze          #+#    #+#             */
/*   Updated: 2022/02/19 17:30:36 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	abba(int x);
void	bbbb(int x);
void	cbbc(int x);

void	rush(int x, int y)
{
	int	a;

	a = 0;
	while (a < y)
	{
		if (a == 0)
			abba(x);
		else if (a == y - 1)
			cbbc(x);
		else
			bbbb(x);
		ft_putchar('\n');
		a++;
	}
}

void	abba(int x)
{
	int	a;

	a = 0;
	while (a < x)
	{
		if (a == 0)
			ft_putchar('A');
		else if (a == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		a++;
	}
}

void	bbbb(int x)
{
	int	a;

	a = 0;
	while (a < x)
	{
		if (a == 0 || a == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		a++;
	}
}

void	cbbc(int x)
{
	int	a;

	a = 0;
	while (a < x)
	{
		if (a == 0)
			ft_putchar('C');
		else if (a == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		a++;
	}
}
