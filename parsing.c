/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jett <sel-jett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:19:12 by sel-jett          #+#    #+#             */
/*   Updated: 2023/12/03 11:52:05 by sel-jett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_parsing(char **av)
{
	int		i;
	char	*p;
	t_node	*stack;

	stack = NULL;
	p = NULL;
	i = 0;
	while (av[++i])
	{
		p = my_strtok(av[i], " \t");
		if (!p)
			return (ft_error(), NULL);
		while (p)
		{
			ft_lstadd_back(&stack, ft_lstnew(ft_atoi(p)));
			p = my_strtok(NULL, " \t");
		}
	}
	(is_sorted(stack)) && (my_malloc(0, 2), 0);
	return (stack);
}
