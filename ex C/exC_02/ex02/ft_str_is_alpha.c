/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:09:12 by tlarraze          #+#    #+#             */
/*   Updated: 2022/03/02 17:43:54 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{	
	int	t;
	int	count;

	t = 0;
	count = 0;
	while (str[t] != '\0')
	{
		if (str[t] >= 'a' && str[t] <= 'z')
			;
		else if (str[t] >= 'A' && str[t] <= 'Z')
			;
		else
			count++;
		t++;
	}
	if (count > 0)
		return (0);
	return (1);
}
