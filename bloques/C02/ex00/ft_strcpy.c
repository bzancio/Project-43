/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil-lo <ibuil-lo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 19:25:08 by ibuil-lo          #+#    #+#             */
/*   Updated: 2025/08/02 19:48:05 by ibuil-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	cont;

	cont = 0;
	while (src[cont])
	{
		dest[cont] = src[cont];
		cont++;
	}
	dest[cont] = '\0';
	return (dest);
}
