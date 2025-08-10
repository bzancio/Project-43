/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil-lo <ibuil-lo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 01:14:48 by ibuil-lo          #+#    #+#             */
/*   Updated: 2025/08/05 02:01:50 by ibuil-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_change(char *c)
{
	*c = 'y';
}

int	main(void)
{
	char	c;

	c = 'x';
	ft_change(&c);
	ft_putchar(c);
}
char	*c = char	c[];
