/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil-lo <ibuil-lo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 19:35:31 by ibuil-lo          #+#    #+#             */
/*   Updated: 2025/08/05 19:48:10 by ibuil-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *cad)
{
	char	*dup;
	int		i;

	i = 0;
	while (cad[i])
	{
		i++;
	}
	dup = malloc((sizeof(char) * i) + 1);
	if (!dup)
	{
		return (NULL);
	}
	i = 0;
	while (cad[i])
	{
		dup[i] = cad[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	main(void)
{
	char	*cad;

	cad = "hola";
	ft_strdup(cad);
	return (0);
}
