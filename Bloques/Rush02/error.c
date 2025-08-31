/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danzamor <danzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 20:37:09 by danzamor          #+#    #+#             */
/*   Updated: 2025/08/31 21:09:00 by danzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	argv_error(int argc, char **argv)
{
	int		op_dict;

	if (argc == 2)
	{
		op_dict = open("numbers.dict", O_RDONLY);
	}
	else if (argc == 3)
	{
		op_dict = open(argv[1], O_RDONLY);
		if (op_dict == -1)
		{
			print_error(2);
			return (-1);
		}
	}
	else
	{
		print_error(2);
		return (-1);
	}
	return (op_dict);
}

void	print_error(int errno)
{
	if (errno == 1)
	{
		write(2, "Dict error", 10);
		write(1, "\n", 1);
		return ;
	}
	else if (errno == 2)
	{
		write(2, "Error", 5);
		write(1, "\n", 1);
		return ;
	}
}
