/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_palindrome.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil-lo <ibuil-lo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 20:46:53 by ibuil-lo          #+#    #+#             */
/*   Updated: 2025/08/05 20:59:46 by ibuil-lo         ###   ########.fr       */
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

int	is_palindrome(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(str);
	while (i < (size / 2))
	{
		if (!(str[i] == str[size - 1 - i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
