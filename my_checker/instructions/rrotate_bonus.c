/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jett <sel-jett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:45:25 by sel-jett          #+#    #+#             */
/*   Updated: 2023/12/02 20:06:24 by sel-jett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	rrotate(t_node	**stack)
{
	t_node	*tmp;
	t_node	*node;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = ft_lstlast(*stack);
	node = *stack;
	while (node->next->next)
		node = node->next;
	node->next = NULL;
	add_front(stack, tmp);
}

void	rra(t_node **stack_a)
{
	rrotate(stack_a);
}

void	rrb(t_node **stack_b)
{
	rrotate(stack_b);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	rrotate(stack_a);
	rrotate(stack_b);
}
