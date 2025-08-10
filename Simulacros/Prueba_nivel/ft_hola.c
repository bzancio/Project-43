/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hola.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil-lo <ibuil-lo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 19:02:57 by ibuil-lo          #+#    #+#             */
/*   Updated: 2025/08/05 19:09:43 by ibuil-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hola(void)
{
	char	*saludo;

	saludo = "Hola Piscina";
	while (*saludo)
	{
		ft_putchar(*saludo);
		saludo++;
	}
}

int	main(void)
{
	ft_hola();
	return (0);
}
