/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putargs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil-lo <ibuil-lo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 21:17:55 by ibuil-lo          #+#    #+#             */
/*   Updated: 2025/08/06 21:42:11 by ibuil-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstring(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	putargs(int argc, char **str)
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		ft_putstring(str[argc - 1 - i]);
		i++;
	}
}
