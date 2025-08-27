/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 17:32:34 by ibuil             #+#    #+#             */
/*   Updated: 2025/08/25 19:37:41 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_set_row(int *row, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		row[i] = 0;
		i++;
	}
}

int	*ft_create_row(int size)
{
	int	*row;

	row = malloc(sizeof(int) * size);
	if (!row)
		return (NULL);
	ft_set_row(row, size);
	return (row);
}

int	**ft_create_tab(int size)
{
	int	**tab;
	int	i;

	tab = malloc(sizeof(int *) * size);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tab[i] = ft_create_row(size);
		if (!tab[i])
		{
			while (i >= 0)
			{
				free(tab[i]);
				i--;
			}
			free(tab);
			return (NULL);
		}
		i++;
	}
	return (tab);
}

void	ft_print_tab(int **tab, int size)
{
	int		r;
	int		c;
	char	digit;

	r = 0;
	while (r < size)
	{
		c = 0;
		while (c < size)
		{
			digit = tab[r][c] + '0';
			write(1, &digit, 1);
			if (c < size - 1)
				write(1, " ", 1);
			c++;
		}
		write(1, "\n", 1);
		r++;
	}
}
