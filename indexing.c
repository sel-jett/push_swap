/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jett <sel-jett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:18:44 by sel-jett          #+#    #+#             */
/*   Updated: 2023/12/06 17:00:45 by sel-jett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index(t_node	*stack_a)
{
	t_node	*temp;
	t_node	*node;
	int		i;
	int		j;

	j = ft_lstsize(stack_a);
	i = -1;
	temp = stack_a;
	while (++i < ft_lstsize(stack_a))
	{
		node = stack_a;
		j = -1;
		while (++j < ft_lstsize(stack_a))
		{
			if (temp->nb > node->nb)
				temp->index++;
			node = node->next;
		}
		temp = temp->next;
	}
}
