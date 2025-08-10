/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   custom_malloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil-lo <ibuil-lo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 19:17:58 by ibuil-lo          #+#    #+#             */
/*   Updated: 2025/08/05 19:32:08 by ibuil-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>	

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_custom_malloc(void)
{
	int	*lista;
	int	i;

	lista = malloc(sizeof(int) * 10);
	i = 0;
	if (!lista)
	{
		return ;
	}
	while (i < 10)
	{
		lista[i] = i;
		i++;
	}
	i = 0;
	while (i < 10)
	{
		ft_putchar(lista[i] + '0');
		i++;
	}
	free(lista);
}

int	main(void)
{
	ft_custom_malloc();
}
