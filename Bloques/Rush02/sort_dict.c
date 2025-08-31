/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danzamor <danzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 19:35:44 by danzamor          #+#    #+#             */
/*   Updated: 2025/08/31 21:08:39 by danzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}

void	sort_dict_ascii(t_num *sarr)
{
	int		i;
	int		j;
	t_num	hold;

	i = 0;
	j = 0;
	while (sarr[i].text != 0)
	{
		while (sarr[j + 1].text != 0)
		{
			if (ft_strcmp(sarr[j].nb, sarr[j + 1].nb) > 0)
			{
				hold = sarr[j];
				sarr[j] = sarr[j + 1];
				sarr[j + 1] = hold;
			}
			j++;
		}
		j = 0;
		i++;
	}
}

void	sort_dict_digits(t_num *sarr)
{
	int		i;
	int		j;
	t_num	hold;

	i = 0;
	j = 0;
	while (sarr[i].text != 0)
	{
		while (sarr[j + 1].text != 0)
		{
			if (slen(sarr[j].nb) > slen(sarr[j + 1].nb))
			{
				hold = sarr[j];
				sarr[j] = sarr[j + 1];
				sarr[j + 1] = hold;
			}
			j++;
		}
		j = 0;
		i++;
	}
}

void	sort_dict(t_num *sarr)
{
	sort_dict_ascii(sarr);
	sort_dict_digits(sarr);
}
