/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:03:11 by tlarraze          #+#    #+#             */
/*   Updated: 2022/03/10 10:17:30 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_print(char *yolo);

int	ft_print_para(char **argv)
{
	int		i;
	char	*yolo;

	i = 1;
	while (argv[i])
	{
		yolo = argv[i];
		ft_print(yolo);
		i++;
	}
	return (0);
}

char	ft_print(char *yolo)
{
	int	yo;

	yo = 0;
	while (yolo[yo] != '\0')
	{
		write(1, &yolo[yo], 1);
		yo++;
	}
	write(1, "\n", 1);
	return (0);
}

int	main(int argc, char **argv)
{
	ft_print_para(argv);
	return (0);
	return (argc);
}
