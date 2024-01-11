/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jett <sel-jett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:09:46 by sel-jett          #+#    #+#             */
/*   Updated: 2023/12/03 10:11:29 by sel-jett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5(t_node **stack_a, t_node **stack_b)
{
	int	i;

	i = 0;
	while (++i <= 5)
	{
		if ((*stack_a)->index < 2)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
	}
	sort_3(stack_a);
	if ((*stack_b)->index < (*stack_b)->next->index)
		sb(stack_b);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
