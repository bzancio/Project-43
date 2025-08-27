/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 20:38:44 by ibuil             #+#    #+#             */
/*   Updated: 2025/08/24 23:10:24 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_visible_line(int *line, int size);
int	ft_copy_column(int **tab, int col, int size, int *dest);
int	ft_copy_reverse_column(int **tab, int col, int size, int *dest);
int	ft_copy_reverse_line(int *line, int size, int *dest);
int	ft_copy_line(int *src, int size, int *dest);

int	ft_check_all_visibility(int **tab, int *values, int size)
{
	int	i;
	int	line[9];
	int	reverse[9];

	i = 0;
	while (i < size)
	{
		ft_copy_column(tab, i, size, line);
		if (ft_count_visible_line(line, size) != values[i])
			return (0);
		ft_copy_reverse_column(tab, i, size, reverse);
		if (ft_count_visible_line(reverse, size) != values[size + i])
			return (0);
		ft_copy_line(tab[i], size, line);
		if (ft_count_visible_line(line, size) != values[size * 2 + i])
			return (0);
		ft_copy_reverse_line(tab[i], size, reverse);
		if (ft_count_visible_line(reverse, size) != values[size * 3 + i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_count_visible_line(int *line, int size)
{
	int	count;
	int	max;
	int	i;

	i = 0;
	count = 0;
	max = 0;
	while (i < size)
	{
		if (line[i] > max)
		{
			max = line[i];
			count++;
		}
		i++;
	}
	return (count);
}

int	ft_copy_column(int **tab, int col, int size, int *dest)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = tab[i][col];
		i++;
	}
	return (1);
}

int	ft_copy_reverse_column(int **tab, int col, int size, int *dest)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = tab[size - 1 - i][col];
		i++;
	}
	return (1);
}

int	ft_copy_reverse_line(int *line, int size, int *dest)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = line[size - 1 - i];
		i++;
	}
	return (1);
}
