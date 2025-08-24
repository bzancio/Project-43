/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 17:56:32 by ibuil             #+#    #+#             */
/*   Updated: 2025/08/19 18:17:23 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] && s2[i] && i < n - 1)
	{
		if (s1[i] != s2[i])
		{
			break ;
		}
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
