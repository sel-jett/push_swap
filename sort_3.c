/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jett <sel-jett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:12:48 by sel-jett          #+#    #+#             */
/*   Updated: 2023/12/03 10:09:07 by sel-jett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max(t_node *stack)
{
	int	max;

	max = stack->nb;
	while (stack)
	{
		(stack->nb > max) && (max = stack->nb, 0);
		stack = stack->next;
	}
	return (max);
}

void	sort_3(t_node **stack)
{
	int	max;
	int	i;

	max = get_max(*stack);
	i = ft_lstsize(*stack);
	((*stack)->nb == max && i == 3) && (ra(stack), i = 1);
	((*stack)->next->nb == max && i == 3) && (rra(stack), 0);
	((*stack)->nb > (*stack)->next->nb) && (sa(stack), 0);
}
