/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:52:16 by tlarraze          #+#    #+#             */
/*   Updated: 2022/02/23 14:58:46 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print(*str)
{
	ft_putchar(*str);
}

void	main(void)
{
	char	*str;
	str = "Reborn !";
	print(*str);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
}
