/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 19:18:09 by ibuil             #+#    #+#             */
/*   Updated: 2025/08/19 00:24:38 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
	{
		return (0);
	}
	return (1);
}

int	ft_is_uppercase(char c)
{
	if (c < 'A' || c > 'Z')
	{
		return (0);
	}
	return (1);
}

int	ft_is_alphanum(char c)
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

int	ft_is_start_of_word(char *str, int pos)
{
	if (pos == 0)
	{
		return (1);
	}
	if (!ft_is_alphanum(str[pos - 1]))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_start_of_word(str, i) && ft_is_lowercase(str[i]))
		{
			str[i] -= 32;
		}
		else if (!ft_is_start_of_word(str, i) && ft_is_uppercase(str[i]))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
