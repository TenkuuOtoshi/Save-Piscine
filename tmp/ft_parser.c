/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 14:59:46 by blevrel           #+#    #+#             */
/*   Updated: 2022/03/06 17:02:15 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

#define SIZE 693

int	ft_parser(void)
{
	int		fd;
	int		ret;
	char	*recap;
	char	buffer[SIZE];

	fd = open("numbers.dict", O_RDONLY | S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		ft_putstr("open() error\n");
		return (1);
	}
	ret = read(fd, buffer, SIZE);
	buffer[ret] = '\0';
	recap = buffer;
	transfer(recap);
	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (1);
	}
	return (ret);
}
