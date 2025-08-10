/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil-lo <ibuil-lo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 20:32:20 by ibuil-lo          #+#    #+#             */
/*   Updated: 2025/08/08 22:45:35 by ibuil-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	is_alphanumeric(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	is_start_of_word(int pos, char *str)
{
	if (pos == 0)
	{
		return (1);
	}
	if (!is_alphanumeric(str[pos - 1]))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_start_of_word(i, str) && is_lowercase(str[i]))
		{
			str[i] -= 32;
		}
		else if (!is_start_of_word(i, str) && is_uppercase(str[i]))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
