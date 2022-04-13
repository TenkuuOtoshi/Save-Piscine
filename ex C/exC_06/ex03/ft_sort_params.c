/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:36:29 by tlarraze          #+#    #+#             */
/*   Updated: 2022/03/10 18:03:35 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2);
int	ft_ultra_tri(char **argv);
int	ft_print(char *yolo);

int	ft_print_ascii(char **argv)
{
	int		i;
	char	*yolo;

	i = 1;
	ft_ultra_tri(argv);
	while (argv[i])
	{
		yolo = argv[i];
		ft_print(yolo);
		i++;
	}
	return (0);
}

int	ft_ultra_tri(char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	j = 2;
	while (argv[j])
	{
		if (ft_strcmp(argv[i], argv[j]) != 1)
		{
			tmp = argv[i];
			argv[i] = argv[j];
			argv[j] = tmp;
			ft_ultra_tri(argv);
		}
		i++;
		j++;
	}
	return (**argv);
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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (s1[i] < s2[i])
		return (1);
	if (s1[i] > s2[i])
		return (0);
	else if (s1[i] == s2[i])
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argv[1])
		ft_print_ascii(argv);
	else
		return (0);
	return (0);
	return (argc);
}
