/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil-lo <ibuil-lo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:13:12 by ibuil-lo          #+#    #+#             */
/*   Updated: 2025/08/04 19:37:24 by ibuil-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	total_lenght(char *str)
{
	int	i;
	int	signo;

	i = 0;
	signo = 1;
	while (str[i] && str[i] > 47 && str[i] < 58)
	{
		if (str[i] = '-')
		{
			signo = 0;	
		}
		i++;	
	}
	if (signo)
	{
		return (i);
	}
	return (-i);
}

int	ft_atoi(const char *str)
{
	int	len;
	int	signo;
	int *num;
	int	i;

	signo = 1;
	i = 0;
	len = total_lenght(&str);		
	if (len < 0)
	{
		signo = 0;
		len = -len;
	}	
	num = malloc(len);
	if (!num)
	{
		return ;
	}
	while (str[i])
	{
		
	}
}
