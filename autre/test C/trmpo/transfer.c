/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transfer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 14:45:10 by tlarraze          #+#    #+#             */
/*   Updated: 2022/03/06 16:15:34 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	transfer(char *yolo)
{
	int	talpha[6666];
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (yolo[i] != '\0')
	{
		while (ft_str_is_numeric(yolo[i]) == 3)
			talpha[a++] = yolo[i++];
		talpha[a++] = ' ';
		if (ft_str_is_alpha(yolo[i]) == 3 && yolo[i - 1] == 32)
		{
			while (ft_str_is_alpha(yolo[i]) == 3)
				talpha[a++] = yolo[i++];
			talpha[a] = '\n';
			a++;
		}
		i++;
	}
	printf("%ls", talpha);
	return (0);
}
