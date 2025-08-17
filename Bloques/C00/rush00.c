/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazuaje- <nazuaje-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 09:08:32 by nazuaje-          #+#    #+#             */
/*   Updated: 2025/08/17 20:53:57 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_check_input(int x, int y)
{
	if (x < 1 || y < 1)
		return (0);
	return (1);
}

void	ft_print_pos(int x, int pos_x, int y, int pos_y)
{
	if ((pos_y == 1 && pos_x == 1) || (pos_y == 1 && pos_x == x))
		ft_putchar('o');
	else if ((pos_y == y && pos_x == 1) || (pos_y == y && pos_x == x))
		ft_putchar('o');
	else if (pos_y == 1 || pos_y == y)
		ft_putchar('-');
	else if (pos_x == 1 || pos_x == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int		pos_x;
	int		pos_y;

	if (!ft_check_input(x, y))
	{
		write(1, "Input error", 11);
		return ;
	}
	pos_y = 1;
	while (pos_y <= y)
	{
		pos_x = 1;
		while (pos_x <= x)
		{
			ft_print_pos(x, pos_x, y, pos_y);
			pos_x++;
		}
		ft_putchar('\n');
		pos_y++;
	}
}
