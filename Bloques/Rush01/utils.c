/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 04:26:25 by ibuil             #+#    #+#             */
/*   Updated: 2025/08/24 22:50:54 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_get_n_from_digit_count(int digit_count)
{
	int	n;

	n = 4;
	while (n <= 9)
	{
		if (n * 4 == digit_count)
			return (n);
		n++;
	}
	return (0);
}

void	ft_free_all(int	*values, int **tab, int size)
{
	int	i;

	free(values);
	i = 0;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	ft_copy_line(int *src, int size, int *dest)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (1);
}
