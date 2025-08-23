/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 04:26:25 by ibuil             #+#    #+#             */
/*   Updated: 2025/08/23 04:39:00 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (n * n == digit_count)
			return (n);
		n++;
	}
	return (0);
}
