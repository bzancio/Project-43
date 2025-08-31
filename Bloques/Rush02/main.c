/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 16:45:55 by danzamor          #+#    #+#             */
/*   Updated: 2025/08/31 22:57:23 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	main(int argc, char **argv)
{
	int		op_dict;
	char	buf[25000];
	t_num	*sarr;
	int		size;
	char	*num;

	op_dict = argv_error(argc, argv);
	if (op_dict == -1)
		return (1);
	size = read(op_dict, buf, sizeof(buf));
	buf[size] = '\0';
	sarr = pars(buf);
	if (!sarr)
	{
		write(2, "Dict Error", 10);
		write(1, "\n", 1);
		return (1);
	}
	sort_dict(sarr);
	num = argv[argc - 1];
	if (num[0] == '0' && num[1] == 0)
		ft_putstr(sarr[0].text);
	algo(sarr, argv[argc - 1]);
	write(1, "\n", 1);
	ft_free_all(sarr);
}
