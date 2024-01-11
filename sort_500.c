/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_500.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jett <sel-jett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:37:53 by sel-jett          #+#    #+#             */
/*   Updated: 2023/12/03 10:12:45 by sel-jett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	checker(int num, t_node **stack_b)
{
	t_node	*node;
	int		len;

	node = *stack_b;
	len = ft_lstsize(node) / 2;
	while (len)
	{
		if (node->index == num)
			return (1);
		len--;
		node = node->next;
	}
	return (0);
}

static void	ft_helper(t_node **stack_a, t_node **stack_b, int *check)
{
	while (ft_lstsize(*stack_b) \
			&& (*stack_a)->index - 1 != (*stack_b)->index)
	{
		if (!check || ((*stack_b)->index) > ft_lstlast(*stack_a)->index)
			(1 == 1) && (pa(stack_a, stack_b), ra(stack_a), *check = 1);
		else
			rb(stack_b);
	}
	pa(stack_a, stack_b);
}

void	ft_algo_five(t_node **stack_a, t_node **stack_b)
{
	int		num;
	int		check;

	check = 0;
	num = ft_lstlast(*stack_a)->index;
	while (ft_lstsize(*stack_b))
	{
		if (checker((*stack_a)->index - 1, stack_b))
			ft_helper(stack_a, stack_b, &check);
		else
		{
			while (ft_lstsize(*stack_b) \
					&& (*stack_a)->index - 1 != (*stack_b)->index)
			{
				if (!check || ((*stack_b)->index) > ft_lstlast(*stack_a)->index)
					(1 == 1) && (pa(stack_a, stack_b), ra(stack_a), check = 1);
				else
					rrb(stack_b);
			}
			pa(stack_a, stack_b);
		}
		while (((*stack_a)->index - 1) == ft_lstlast(*stack_a)->index)
			rra(stack_a);
		(ft_lstlast(*stack_a)->index == num) && (check = 0);
	}
}
