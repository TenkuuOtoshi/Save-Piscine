/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlarraze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:10:16 by tlarraze          #+#    #+#             */
/*   Updated: 2022/03/07 10:20:55 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i++] != '\0')
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	i = 0;
	if (str[i] <= 122 && str[i] >= 97)
		str[i] = str[i] - 32;
	while (str[i] != '\0')
	{
		if (str[i] <= 47 && str[i] >= 0 && str[i] != 127)
		{
			while (str[i] <= 47 && str[i] >= 0)
				i++;
			if (str[i] <= 122 && str[i] >= 97)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
