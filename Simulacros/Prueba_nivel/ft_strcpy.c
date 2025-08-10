/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil-lo <ibuil-lo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 19:56:24 by ibuil-lo          #+#    #+#             */
/*   Updated: 2025/08/05 20:15:52 by ibuil-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dst, char *src)
{
	int	size;
	int	i;

	size = ft_strlen(src);
	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	main(void)
{
	char	*src;
	char	*dst;

	src = malloc(sizeof(char) * 5);
	dst = malloc(sizeof(char) * (ft_strlen(src) + 1));
	src = "hola";
	ft_strcpy(dst, src);
}
