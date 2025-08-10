/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil-lo <ibuil-lo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:58:45 by ibuil-lo          #+#    #+#             */
/*   Updated: 2025/08/06 19:15:34 by ibuil-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_node
{
	int	value;
	t_node *next;
} t_node;

void	addnode(t_node *node0, t_node *node1)
{
	node0->next = node1;
}

int	main(void)
{
	t_node	node0;
	t_node	node1;
	t_node	*p0node;
	t_node	*p1node;

	p0node = &node0;
	p1node = &node1;
	addnode(p0node, p1node);
}
