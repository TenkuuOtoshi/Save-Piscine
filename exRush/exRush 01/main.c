/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmarin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 23:34:06 by thmarin           #+#    #+#             */
/*   Updated: 2022/02/27 11:16:46 by thmarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"rush01.h"

int	main(int argc, char **argv)
{
	char	tab[4][4];
	char	pov[4][4 + 1];

	fill_tab_with_zero(tab);
	if (fill_pov_with_arg(argv[1], pov) == 16 && argc == 2
		&& check_pov_values(pov))
	{
		printf("The return of the function is: %d\n",
			check_tab(tab, 0, 0, pov));
		final_print(tab);
		printf("The return of the function is: %d\n",
			check_tab(tab, 1, 3, pov));
		final_print(tab);
		printf("The return of the function is: %d\n",
			check_pov_values(pov));
	}
	else
		write(1, "Error\n", 6);
	return (0);
}	
