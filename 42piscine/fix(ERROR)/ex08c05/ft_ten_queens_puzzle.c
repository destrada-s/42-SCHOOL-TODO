/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:45:49 by destrada          #+#    #+#             */
/*   Updated: 2022/12/03 13:09:13 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

typedef struct s_board
{
	int	board_size;
	int	j;
	int	k;
}	t_board;

void	ft_putstr(char *str);
void	ft_putint(int c);
void	ft_print_matrix(int board[10][10], int size);
int		is_safe(int board[10][10], int i, int col, t_board bd);
int		solve_nq_utils(int board[10][10], int col);
int		ft_ten_queens_puzzle(void);

void	ft_putint(int c)
{
c = c + 48;
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_matrix(int board[10][10], int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			ft_putint(board[i][j]);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

int	is_safe(int board[10][10], int i, int col, t_board bd)
{
	bd.j = i;
	bd.k = 0;
	while (bd.k < col)
	{
		if (board[bd.j][bd.k++] == 1)
			return (0);
	}
	bd.j = i;
	bd.k = col;
	while (bd.j >= 0 && bd.k >= 0)
	{
		if (board[bd.j--][bd.k--] == 1)
			return (0);
	}
	bd.j = i;
	bd.k = col;
	while (bd.j < bd.board_size && bd.k >= 0)
	{
		if (board[bd.j][bd.k] == 1)
			return (0);
		bd.j++;
		bd.k--;
	}
	return (1);
}

int	solve_nq_utils(int board[10][10], int col)
{
	int		i;
	t_board	bd;

	bd.board_size = 10;
	i = 0;
	if (col >= 10)
		return (1);
	while (i < 10)
	{
		if (is_safe(board, i, col, bd))
		{
			board[i][col] = 1;
			if (solve_nq_utils(board, col + 1))
				return (1);
			board[i][col] = 0;
		}
		i++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10][10];
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	if (solve_nq_utils(board, 0) == 0)
	{
    	ft_putstr("Solution does not exist\n");
    	return (0);
    }
	ft_print_matrix(board, 10);
    return (1);
}

int main()
{
	ft_ten_queens_puzzle();
	return (0);
}

