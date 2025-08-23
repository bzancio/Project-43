/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 04:18:46 by ibuil             #+#    #+#             */
/*   Updated: 2025/08/23 04:42:08 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);
int	ft_get_n_from_digit_count(int digit_count);

int	ft_valid_argc(int argc)
{
	if (argc != 2)
		return (0);
	return (1);
}

int	ft_valid_size(int digit_count)
{
	if (ft_get_n_from_digit_count(digit_count))
		return (1);
	return (0);
}

int	ft_valid_format(char *str)
{
	int	i;
	int	digit_count;

	i = 0;
	digit_count = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (str[i] < '0' || str[i] > '9')
				return (0);
			digit_count++;
		}
		else
		{
			if (str[i] != ' ')
				return (0);
		}
		i++;
	}
	if (i % 2 == 0 || !ft_valid_size(digit_count))
		return (0);
	return (1);
}

int	ft_valid_values(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = ft_get_n_from_digit_count((ft_strlen(str) + 1) / 2);
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (str[i] == '0' || (str[i] - '0') > n)
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_validate_args(int argc, char **argv)
{
	if (!ft_valid_argc(argc))
		return (0);
	if (!ft_valid_format(argv[1]))
		return (0);
	if (!ft_valid_values(argv[1]))
		return (0);
	return (1);
}
