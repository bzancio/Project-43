/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 22:11:02 by ibuil             #+#    #+#             */
/*   Updated: 2025/08/23 04:22:02 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_validate_args(int argc, char **argv);

int	main(int argc, char **argv)
{
	if (!ft_validate_args(argc, argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}
