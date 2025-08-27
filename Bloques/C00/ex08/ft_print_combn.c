/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:07:05 by ibuil             #+#    #+#             */
/*   Updated: 2025/08/14 19:09:01 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_last(int *arr, int n)
{
	if (arr[0] == 10 - n)
	{
		return (1);
	}
	return (0);
}

void	ft_print_arr(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
}

void	ft_increment_arr(int *arr, int n)
{
	int	i;
	int	j;

	i = n - 1;
	while (i >= 0)
	{
		if (arr[i] < 10 - n + i)
		{
			arr[i]++;
			j = i + 1;
			while (j < n)
			{
				arr[j] = arr[j - 1] + 1;
				j++;
			}
			break ;
		}
		i--;
	}
}

void	ft_print_combn(int n)
{
	int	arr[9];
	int	i;

	i = 0;
	if (n < 1 || n > 10)
	{
		return ;
	}
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	while (1)
	{
		ft_print_arr(arr, n);
		if ((ft_is_last(arr, n)))
		{
			break ;
		}
		write(1, ", ", 2);
		ft_increment_arr(arr, n);
	}
}
