/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil-lo <ibuil-lo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 17:55:38 by ibuil-lo          #+#    #+#             */
/*   Updated: 2025/08/03 19:25:41 by ibuil-lo         ###   ########.fr       */
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

void	ft_strcpy(char *dest, char *src, int *pos)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[*pos] = src[i];
		(*pos)++;
		i++;
	}
}

int	ft_len_total(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		total += ft_strlen(sep) * (size - 1);
	return (total + 1);
}

void	ft_fill_result(char *result, int size, char **strs, char *sep)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (i < size)
	{
		if (i > 0)
		{
			ft_strcpy(result, sep, &pos);
		}
		ft_strcpy(result, strs[i], &pos);
		i++;
	}
	result[pos] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;

	if (size == 0)
	{
		result = malloc(1);
		if (result)
		{
			result[0] = '\0';
		}
		return (result);
	}
	result = malloc(sizeof(char) * ft_len_total(size, strs, sep));
	if (!result)
		return (0);
	ft_fill_result(result, size, strs, sep);
	return (result);
}
