/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:45:13 by blevrel           #+#    #+#             */
/*   Updated: 2022/03/06 17:01:34 by tlarraze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include<unistd.h>
# include<stdlib.h>
# include<fcntl.h>
# include<stdio.h>

int		ft_parser(void);
int		ft_str_is_numeric(char c);
int		ft_str_is_alpha(char c);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	transfer(char *recap);
#endif
