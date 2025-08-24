/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 20:23:51 by ibuil             #+#    #+#             */
/*   Updated: 2025/08/21 20:52:53 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	res = 1;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		res = res * i;
		i++;
	}
	return (res);
}
