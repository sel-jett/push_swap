/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jett <sel-jett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:12:41 by sel-jett          #+#    #+#             */
/*   Updated: 2023/12/06 17:00:08 by sel-jett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	push(t_node **src, t_node **dst)
{
	t_node	*node;

	if (!*src)
		return ;
	node = *src;
	*src = (*src)->next;
	node->next = NULL;
	add_front(dst, node);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	push(stack_a, stack_b);
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	push(stack_b, stack_a);
}
