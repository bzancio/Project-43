/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil-lo <ibuil-lo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 19:43:30 by ibuil-lo          #+#    #+#             */
/*   Updated: 2025/08/02 19:49:33 by ibuil-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char origen[] = "Hola mundo";
    char destino[20]; // Asegúrate de que hay espacio suficiente

	ft_strcpy(destino, origen);

	printf("Destino: %s\n", destino); // → "Hola mundo"
}
