/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 17:33:25 by ibuil             #+#    #+#             */
/*   Updated: 2025/08/24 22:41:18 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_get_n_from_digit_count(int n);

int	*ft_extract_values(char *str, int *size)
{
	int	i;
	int	j;
	int	n;
	int	*values;

	i = 0;
	j = 0;
	*size = ft_get_n_from_digit_count((ft_strlen(str) + 1) / 2);
	n = *size;
	values = malloc(sizeof(int) * (n * 4));
	if (!values)
		return (NULL);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			values[j] = str[i] - '0';
			j++;
		}
		i++;
	}
	return (values);
}
