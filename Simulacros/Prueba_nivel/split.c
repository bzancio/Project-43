/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil-lo <ibuil-lo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:45:50 by ibuil-lo          #+#    #+#             */
/*   Updated: 2025/08/06 18:43:09 by ibuil-lo         ###   ########.fr       */
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

int	count_words(char *str)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (str[i] != ' ' && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		else if (str[i] == ' ')
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}

int	word_len(char *str, int start)
{
	int	len;

	len = 0;
	while (str[start + len] && str[start + len] != ' ')
	{
		len++;
	}
	return (len);
}

char	*copy_word(char *str, int start, int len)
{
	char	*copy;
	int		i;

	copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		copy[i] = str[start + i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

void	fill_words(char **res, char *str)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i])
		{
			len = word_len(str, i);
			res[j] = copy_word(str, i, len);
			j++;
			i += len;
		}
	}
	res[j] = NULL;
}

char	**split(char *str)
{
	int		words;
	char	**res;

	words = count_words(str);
	res = malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	fill_words(res, str);
	return (res);
}
