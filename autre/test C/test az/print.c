/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:09:16 by tlarraze          #+#    #+#             */
/*   Updated: 2022/02/17 17:33:07 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void    ft_print_alphabet(void);

int	main()
{
	ft_print_alphabet(void);
}
void	ft_print_alphabet(void)
{
	char ch;

        for (ch = 'a'; ch <= 'z' ; ch++)

        write(1, %ch, 1);
}

