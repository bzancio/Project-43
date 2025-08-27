/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 22:11:02 by ibuil             #+#    #+#             */
/*   Updated: 2025/08/25 19:38:34 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_validate_args(int argc, char **argv);
int		*ft_extract_values(char *str, int *size);
int		**ft_create_tab(int size);
int		ft_try_solve(int *values, int **tab, int size);
void	ft_print_tab(int **tab, int size);
void	ft_free_all(int *values, int **tab, int size);

int	main(int argc, char **argv)
{
	int	*values;
	int	size;
	int	**tab;

	if (!ft_validate_args(argc, argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	values = ft_extract_values(argv[1], &size);
	tab = ft_create_tab(size);
	if (!values || !tab)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (!ft_try_solve(values, tab, size))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	ft_print_tab(tab, size);
	ft_free_all(values, tab, size);
	return (0);
}
