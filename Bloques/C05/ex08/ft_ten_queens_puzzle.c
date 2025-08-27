/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 02:03:11 by ibuil             #+#    #+#             */
/*   Updated: 2025/08/27 14:39:35 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_safe(int board[10], int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row)
			return (0);
		if ((board[i] - i) == (row - col))
			return (0);
		if ((board[i] + i) == (row + col))
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_solution(int board[10])
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		ft_putchar(c);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_solve(int board[10], int col)
{
	int	count;
	int	row;

	if (col == 10)
	{
		ft_print_solution(board);
		return (1);
	}
	count = 0;
	row = 0;
	while (row < 10)
	{
		if (ft_is_safe(board, row, col))
		{
			board[col] = row;
			count += ft_solve(board, col + 1);
		}
		row++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];

	return (ft_solve(board, 0));
}
