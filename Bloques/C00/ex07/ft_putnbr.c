/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil-lo <ibuil-lo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:14:59 by ibuil-lo          #+#    #+#             */
/*   Updated: 2025/08/02 17:59:40 by ibuil-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		divisor;
	char	digit;

	divisor = 1;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	while (nb / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		digit = '0' + (nb / divisor);
		write(1, &digit, 1);
		nb %= divisor;
		divisor /= 10;
	}
}
