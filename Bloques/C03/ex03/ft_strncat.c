/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 18:53:21 by ibuil             #+#    #+#             */
/*   Updated: 2025/08/19 20:22:55 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] && i < nb)
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[i + dest_len] = '\0';
	return (dest);
}
