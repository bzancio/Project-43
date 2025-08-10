/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil-lo <ibuil-lo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 01:11:53 by ibuil-lo          #+#    #+#             */
/*   Updated: 2025/08/03 01:34:29 by ibuil-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	int		len;
	char	*copy;
	char	*start;

	len = 0;
	while (src[len])
	{
		len++;
	}
	copy = malloc(i + 1);
	if (!copy)
	{
		return (NULL);
	}
	start = copy;
	while (*src)
	{
		*copy++ = *src++;
	}
	*copy = '\0';
	return (start);
}
