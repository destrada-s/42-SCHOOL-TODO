/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgerod <jorgerod@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:37:44 by jorgerod          #+#    #+#             */
/*   Updated: 2022/08/14 17:35:01 by jorgerod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
void	matrix(int x, int y);
void	ft_checker(int x, int y, int row, int col);
void	ft_putchar(char c);

void	rush(int x, int y)
{
	if (x == 0 || y == 0)
		ft_putchar('\0');
	else if (x > 0 && y > 0)
		matrix(x, y);
	else
		write(1, "No negative numbers.\n", 22);
}

void	ft_checker(int x, int y, int row, int col)
{
	if (row == 0 && col == 0)
		ft_putchar('/');
	else if (row == 0 && col == x - 1)
		ft_putchar('\\');
	else if (row == y - 1 && col == 0)
		ft_putchar('\\');
	else if (row == y - 1 && col == x - 1)
		ft_putchar('/');
	else if ((row > 0 && row < y - 1) && (col == 0 || col == x - 1))
		ft_putchar('*');
	else if ((col > 0 && col < x - 1) && (row == 0 || row == y - 1))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	matrix(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			ft_checker(x, y, row, col);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
