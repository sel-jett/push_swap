/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jett <sel-jett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:29:43 by sel-jett          #+#    #+#             */
/*   Updated: 2023/12/06 17:01:33 by sel-jett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		return (0);
	stack_a = ft_parsing(av);
	if (ft_lstsize(stack_a) == 1)
		my_malloc(0, 2);
	if (ft_lstsize(stack_a) <= 3)
		sort_3(&stack_a);
	else if (ft_lstsize(stack_a) <= 5)
	{
		ft_index(stack_a);
		sort_5(&stack_a, &stack_b);
	}
	else if (ft_lstsize(stack_a) > 5)
	{
		ft_index(stack_a);
		ft_algo_to_b(&stack_a, &stack_b);
		ft_algo_five(&stack_a, &stack_b);
	}
	my_malloc(0, 2);
	return (0);
}
