/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzancio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 20:29:19 by bzancio           #+#    #+#             */
/*   Updated: 2025/08/01 21:46:30 by bzancio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	numeros[3];

	numeros[0] = '0';
	while (numeros[0] <= '7')
	{
		numeros[1] = numeros[0] + 1;
		while (numeros[1] <= '8')
		{
			numeros[2] = numeros[1] + 1;
			while (numeros[2] <= '9')
			{
				write(1, numeros, 3);
				if (numeros[0] != '7')
					write(1, ", ", 2);
				numeros[2]++;
			}
			numeros[1]++;
		}
		numeros[0]++;
	}
}
