/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:33:39 by blevrel           #+#    #+#             */
/*   Updated: 2022/03/06 15:50:25 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "rush02.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1 || argc < 2 || argc > 3)
	{
		ft_putstr("Error\n");
		return (-1);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
		{
			ft_putstr("Error");
			return (-1);
		}
		i++;
	}
	if (argc == 3)
	{
		ft_putstr("Dict Error\n");
		return (-1);
	}
	ft_parser();
	return (0);
}
