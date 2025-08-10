/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil-lo <ibuil-lo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 22:17:08 by ibuil-lo          #+#    #+#             */
/*   Updated: 2025/08/06 16:40:54 by ibuil-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef	struct s_punto
	{
		int	x;
		int	y;
	}	t_punto;

void	mover(t_punto *p, int dx, int dy)
{
	p->x += dx;
	p->y += dy;
}

int	main(void)
{
	t_punto *p1;
	t_punto p;	

	p1 = &p;
	p1->x = 3;
	p1->y = 7;
	mover(p1, 1, -3)
	return (0);
}
