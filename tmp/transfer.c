/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transfer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 14:45:10 by tlarraze          #+#    #+#             */
/*   Updated: 2022/03/06 17:03:17 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	transfer(char *recap)
{
	char	talpha[6666];
	 int	i;
	 int	a;

	i = 0;
	a = 0;
	while (recap[i] != '\0')
	{
		while (ft_str_is_numeric(recap[i]) == 3)
			talpha[a++] = recap[i++];
		if (ft_str_is_alpha(recap[i]) == 3 && recap[i - 1] == 32)
		{
			while (ft_str_is_alpha(recap[i]) == 3)
				talpha[a++] = recap[i++];
			talpha[a] = '\n';
			a++;
		}
		i++;
	}
	ft_putstr(talpha);
	return (0);
}
