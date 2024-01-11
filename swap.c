/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jett <sel-jett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:11:17 by sel-jett          #+#    #+#             */
/*   Updated: 2023/12/01 14:40:24 by sel-jett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_swap(t_node **stack_a)
{
	int	nb_cont;
	int	i_cont;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	nb_cont = (*stack_a)->nb;
	i_cont = (*stack_a)->index;
	(*stack_a)->nb = (*stack_a)->next->nb;
	(*stack_a)->index = (*stack_a)->next->index;
	(*stack_a)->next->nb = nb_cont;
	(*stack_a)->next->index = i_cont;
}

void	sa(t_node **stack_a)
{
	ft_swap(stack_a);
	ft_putstr("sa\n");
}

void	sb(t_node	**stack_b)
{
	ft_swap(stack_b);
	ft_putstr("sb\n");
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	ft_putstr("ss\n");
}
