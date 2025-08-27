/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:59:22 by ibuil             #+#    #+#             */
/*   Updated: 2025/08/25 20:00:52 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_comp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(int argc, char **argv)
{
	int		i;
	int		sorted;
	char	*temp;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_comp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				sorted = 0;
			}
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc < 2)
		return (1);
	ft_sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
