/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 17:32:49 by ibuil             #+#    #+#             */
/*   Updated: 2025/08/24 22:44:29 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_all_visibility(int **tab, int *values, int size);

int	ft_check_line_pos(int *line, int num, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (line[i] == num)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_column_pos(int **tab, int col, int num, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (tab[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_valid_position(int **tab, int row, int col, int num)
{
	if (!ft_check_line_pos(tab[row], num, col))
		return (0);
	if (!ft_check_column_pos(tab, col, num, row))
		return (0);
	return (1);
}

int	ft_solve_pos(int *values, int **tab, int size, int pos)
{
	int	row;
	int	col;
	int	num;

	if (pos >= size * size)
		return (ft_check_all_visibility(tab, values, size));
	row = pos / size;
	col = pos % size;
	if (tab[row][col] != 0)
		return (ft_solve_pos(values, tab, size, pos + 1));
	num = 1;
	while (num <= size)
	{
		if (ft_is_valid_position(tab, row, col, num))
		{
			tab[row][col] = num;
			if (ft_solve_pos(values, tab, size, pos + 1))
				return (1);
			tab[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int	ft_try_solve(int *values, int **tab, int size)
{
	int	pos;

	pos = 0;
	if (!ft_solve_pos(values, tab, size, pos))
		return (0);
	return (1);
}
