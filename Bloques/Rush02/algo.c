/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danzamor <danzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:31:18 by danzamor          #+#    #+#             */
/*   Updated: 2025/08/31 21:56:56 by danzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void	p_m1000(int nb, t_num *sarr)
{
	if (nb <= 20)
		ft_putstr(sarr[nb].text);
	else if (nb < 100)
	{
		ft_putstr(sarr[18 + nb / 10].text);
		if (nb % 10 == 0)
			return ;
		ft_putstr("-");
		ft_putstr(sarr[nb % 10].text);
	}
	else if (nb < 1000)
	{
		p_m1000(nb / 100, sarr);
		ft_putstr(" ");
		ft_putstr(sarr[28].text);
		if (nb % 100 == 0)
			return ;
		ft_putstr(" and ");
		p_m1000(nb % 100, sarr);
	}
}

void	p_o1000(t_num *sarr, char *num, int len, int print)
{
	char	numc[4];
	int		i;

	i = 0;
	ft_strncpy(numc, num, print);
	p_m1000(ft_atoi(numc), sarr);
	ft_putstr(" ");
	ft_putstr(sarr[28 + (len - 1) / 3].text);
	while (num[i + print] == '0')
		i++;
	if (i + print != slen(num))
		ft_putstr(" ");
	algo(sarr, num + print);
}

void	algo(t_num *sarr, char *num)
{
	int		len;
	int		print;

	while (*num == '0')
		num++;
	if (*num == 0)
		return ;
	print = 0;
	len = slen(num);
	if (len < 4)
	{
		p_m1000(ft_atoi(num), sarr);
		return ;
	}
	else if (len % 3 == 0)
		print = 3;
	else
		print = len % 3;
	p_o1000(sarr, num, len, print);
}
