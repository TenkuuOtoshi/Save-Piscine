/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testabec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:21:22 by tlarraze          #+#    #+#             */
/*   Updated: 2022/02/18 11:05:08 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_print_alphabet(void)
{
	write(1,"abcdefghijklmnopqrstuvwxyz", 26);
}

int     main(void)
{

        ft_print_alphabet();
}

