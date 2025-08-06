/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mult3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil-lo <ibuil-lo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:19:35 by ibuil-lo          #+#    #+#             */
/*   Updated: 2025/08/06 19:49:16 by ibuil-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_mult3(int n)
{
	int	*mult;
	int	i;
	int	num_mult;
	int	num;

	if (n <= 0)
	{
		return (NULL);
	}
	i = 0;
	num_mult = (n / 3);
	mult = malloc(sizeof(int) * num_mult);
	if (!mult)
	{
		return (NULL);
	}
	num = 0;
	while (i < num_mult)
	{
		num += 3;
		mult[i] = num;
		i++;
	}
	return (mult);
}
