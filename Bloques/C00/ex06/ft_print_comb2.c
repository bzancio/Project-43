/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:56:23 by ibuil             #+#    #+#             */
/*   Updated: 2025/08/14 19:08:10 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	num[2];
	char	toprint[5];

	toprint[2] = ' ';
	num[0] = 0;
	num[1] = 1;
	while (num[0] <= 98)
	{
		while (num[1] <= 99)
		{
			toprint[0] = '0' + (num[0] / 10);
			toprint[1] = '0' + (num[0] % 10);
			toprint[3] = '0' + (num[1] / 10);
			toprint[4] = '0' + (num[1] % 10);
			write(1, &toprint, 5);
			if (num[0] != 98)
			{
				write(1, ", ", 2);
			}
			num[1]++;
		}
		num[0]++;
		num[1] = num[0] + 1;
	}
}
