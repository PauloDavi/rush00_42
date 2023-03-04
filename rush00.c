/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:12:27 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/03/04 20:55:26 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	ft_putchar(char c);

char	select_char(int x, int y, int x_max, int y_max)
{
	bool	x_is_zero;
	bool	y_is_zero;
	bool	x_is_max;
	bool	y_is_max;

	x_is_zero = x == 0;
	y_is_zero = y == 0;
	x_is_max = x == x_max;
	y_is_max = y == y_max;
	if ((x + y == 0) || (x + y == x_max + y_max) || (x_is_zero && y_is_max)
		|| (y_is_zero && x_is_max))
	{
		return ('o');
	}
	if (x_is_zero || x_is_max)
	{
		return ('|');
	}
	if (y_is_zero || y_is_max)
	{
		return ('-');
	}
	return (' ');
}

void	rush(int x, int y)
{
	int	colunm;
	int	line;

	line = 0;
	while (line < y)
	{
		colunm = 0;
		while (colunm < x)
		{
			ft_putchar(select_char(colunm, line, x - 1, y - 1));
			colunm++;
		}
		ft_putchar('\n');
		line++;
	}
}
