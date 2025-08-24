/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 19:12:04 by ibuil             #+#    #+#             */
/*   Updated: 2025/08/21 12:34:56 by ibuil            ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	to_find_len;

	if (*to_find == '\0')
	{
		return (str);
	}
	i = 0;
	to_find_len = ft_strlen(to_find);
	while (str[i])
	{
		j = 0;
		while (j < to_find_len && str[i + j] == to_find[j])
		{
			j++;
		}
		if (j == to_find_len)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
