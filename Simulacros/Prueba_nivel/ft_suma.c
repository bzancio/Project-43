/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_suma.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil-lo <ibuil-lo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 19:10:12 by ibuil-lo          #+#    #+#             */
/*   Updated: 2025/08/05 19:15:49 by ibuil-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	suma(int a, int b)
{
	return (a + b);
}

int	main(void)
{
	int	a;
	int	b;
	int	result;

	a = 1;
	b = 2;
	result = suma(a, b);
	ft_putchar('0' + result);
	return (0);
}
