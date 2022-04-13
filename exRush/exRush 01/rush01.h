/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmarin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 23:07:16 by thmarin           #+#    #+#             */
/*   Updated: 2022/02/26 23:59:10 by thmarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdio.h>

void	fill_tab_with_zero(char tab[4][4]);
int		check_tab(char tab[4][4], int bottop, int line, char pov[4][4 + 1]);
int		dual_check(char c, char tab[4][4], int line, int col);
int		fill_pov_with_arg(char *input, char pov[4][4 + 1]);
int		fill_tab_bot(char tab[4][4], int bottop, int line, char pov[4][4 + 1]);
int		final_print(char tab[4][4]);
void	ft_putchar(char c);
int		check_pov_values(char pov[4][5]);

#endif
