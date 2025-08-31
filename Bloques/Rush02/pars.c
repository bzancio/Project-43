/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 16:15:06 by danzamor          #+#    #+#             */
/*   Updated: 2025/08/31 23:15:13 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void	save_pars(t_num *sarr, char **a, int nc)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (i < nc && a[i])
	{
		j = 0;
		while (a[i][j] >= '0' && a[i][j] <= '9')
			j++;
		sarr[i].nb = ft_strndup(a[i], j);
		tmp = a[i];
		while (*tmp != ':')
			tmp++;
		tmp++;
		while (*tmp == ' ')
			tmp++;
		sarr[i].text = ft_strdup(tmp);
		i++;
	}
	sarr[i].text = NULL;
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

t_num	*pars(char *buf)
{
	char	**a;
	t_num	*sarr;
	int		nc;

	nc = 0;
	a = ft_split(buf, "\n");
	if (!a)
		return (NULL);
	while (a[nc])
		nc++;
	sarr = malloc((nc + 1) * sizeof(t_num));
	if (!sarr)
	{
		free_split(a);
		return (NULL);
	}
	save_pars(sarr, a, nc);
	free_split(a);
	return (sarr);
}
