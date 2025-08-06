/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil-lo <ibuil-lo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 21:02:19 by ibuil-lo          #+#    #+#             */
/*   Updated: 2025/08/05 21:52:28 by ibuil-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_words(char *str)
{
	int	i;
	int	in_word;
	int	count;

	i = 0;
	in_word = 0;
	cont = 0;
	while (str[i])
	{
		if (str[i] != ' ' && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (str[i] == ' ')
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}
