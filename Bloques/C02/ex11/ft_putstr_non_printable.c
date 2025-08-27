/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 00:56:35 by ibuil             #+#    #+#             */
/*   Updated: 2025/08/19 20:35:39 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_char_to_hex(char *hexa, char c)
{
	char	*base;

	base = "0123456789abcdef";
	hexa[0] = base[c / 16];
	hexa[1] = base[c % 16];
}

void	ft_put_hex(char c)
{
	char	hexa[2];

	write(1, "\\", 1);
	ft_char_to_hex(hexa, c);
	write(1, &hexa[0], 1);
	write(1, &hexa[1], 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] < 32 || (unsigned char)str[i] == 127)
		{
			ft_put_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
