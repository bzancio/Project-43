/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 20:19:11 by danzamor          #+#    #+#             */
/*   Updated: 2025/08/31 22:57:17 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		is_charset(char car, char *charset);
int		wc(char *str, char *charset);
void	save(char *str, char *charset, char **ret);

char	**ft_split(char *str, char *charset)
{
	char	**ret;

	ret = malloc((wc(str, charset) + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	save(str, charset, ret);
	return (ret);
}

void	save(char *str, char *charset, char **ret)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (*str != '\0')
	{
		if (is_charset(*str, charset) == 0)
		{
			while (is_charset(str[j], charset) == 0 && str[j] != '\0')
				j++;
			ret[i] = malloc((j + 1) * sizeof(char));
			ft_strncpy(ret[i], str, j);
			str += j;
			j = 0;
			i++;
		}
		else
			str++;
	}
	ret[i] = NULL;
	return ;
}

int	wc(char *str, char *charset)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (str[i])
	{
		if (is_charset(str[i], charset) == 0 && str[i] != '\0')
		{
			ret++;
			while (is_charset(str[i], charset) == 0 && str[i] != '\0')
				i++;
			if (str[i - 1] == 0)
				break ;
		}
		else
			i++;
	}
	return (ret);
}

int	is_charset(char car, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (car == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
