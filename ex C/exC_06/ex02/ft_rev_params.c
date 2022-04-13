/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:18:23 by tlarraze          #+#    #+#             */
/*   Updated: 2022/03/10 10:29:11 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print(char *yolo);

int	ft_rev_print(char **argv)
{
	int		i;
	char	*yolo;

	i = 1;
	while (argv[i])
		i++;
	i--;
	while (argv[i])
	{
		if (i == 0)
			return (0);
		yolo = argv[i];
		ft_print(yolo);
		i--;
	}
	return (0);
}

int	ft_print(char *yolo)
{
	int	i;

	i = 0;
	while (yolo[i] != '\0')
	{
		write(1, &yolo[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

int	main(int argc, char **argv)
{
	ft_rev_print(argv);
	return (0);
	return (argc);
}
