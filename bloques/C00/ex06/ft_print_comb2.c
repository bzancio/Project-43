/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzancio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 21:52:34 by bzancio           #+#    #+#             */
/*   Updated: 2025/08/02 17:13:27 by ibuil-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	num[2];
	char	toprint[5];

	toprint[2] = ' ';
	num[0] = '0';
	num[1] = '1';
	while (num[0] <= 98)
	{
		while (num[1] <= 99)
		{
			toprint[0] = '0' + (num[0] / 10);
			toprint[1] = '0' + (num[0] % 10);
			toprint[3] = '0' + (num[1] / 10);
			toprint[4] = '0' + (num[1] % 10);
			write(1, &toprint, 5);
			if (num[0] != 98 || num[1] != 99)
			{
				write(1, ", ", 2);
			}
			num[1]++;
		}
		num[0]++;
		num[1] = num[0] + 1;
	}
}
