/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:59:21 by tlarraze          #+#    #+#             */
/*   Updated: 2022/03/10 10:02:36 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_print(char *yolo)
{
	int	yo;

	yo = 0;
	while (yolo[yo] != '\0')
	{
		write(1, &yolo[yo], 1);
		yo++;
	}
	return (0);
}

int	main(int argv, char **argc)
{
	char	*yolo;

	yolo = argc[0];
	ft_print(yolo);
	return (0);
	return (argv);
}
