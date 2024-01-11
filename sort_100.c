/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jett <sel-jett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:12:36 by sel-jett          #+#    #+#             */
/*   Updated: 2023/12/03 10:11:33 by sel-jett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <unistd.h>

static int	ft_init_algo(t_node **stack_a, int *p1, int *p2)
{
	int	last;

	last = *p1;
	*p2 = (ft_lstsize(*stack_a) / 6) + *p1;
	*p1 += ft_lstsize(*stack_a) / 3;
	return (last);
}

void	ft_algo_to_b(t_node **stack_a, t_node **stack_b)
{
	int	pivot1;
	int	pivot2;
	int	last_pivot;

	last_pivot = -1;
	pivot1 = 0;
	pivot2 = (ft_lstsize(*stack_a) / 6) + pivot1;
	pivot1 = ft_lstsize(*stack_a) / 3;
	while (ft_lstsize(*stack_a) > 3)
	{
		if (ft_lstsize(*stack_b) > 1 && ((*stack_b)->index > last_pivot) \
			&& (*stack_b)->index < pivot2 && (*stack_a)->index > pivot1)
			rr(stack_a, stack_b);
		else if (ft_lstsize(*stack_b) > 1 && ((*stack_b)->index > last_pivot) \
			&& (*stack_b)->index < pivot2)
			rb(stack_b);
		if ((*stack_a)->index < pivot1)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
		if (ft_lstsize(*stack_b) >= pivot1)
			last_pivot = ft_init_algo(stack_a, &pivot1, &pivot2);
	}
	sort_3(stack_a);
}
