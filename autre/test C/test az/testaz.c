/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testaz.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:30:14 by tlarraze          #+#    #+#             */
/*   Updated: 2022/02/18 10:06:41 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int main()
{

	int tab[122];
	int i;

	i = 97;
	while (i < 122)
	{
	
		tab[i] = i;
		i++;
	}
	i = 97;
	while (i < 122)
	{
		write(1,"%c", 122);
		//printf("%c ",i  tab[i]);
		i++;
	}
}