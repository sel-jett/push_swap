/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jett <sel-jett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:25:40 by sel-jett          #+#    #+#             */
/*   Updated: 2023/12/03 14:16:10 by sel-jett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	ft_helper(t_node **stack_a, t_node **stack_b, char *line)
{
	int	i;

	i = 0;
	(!ft_strcmp(line, "sa") && !i) && (sa(stack_a), i++);
	(!ft_strcmp(line, "sb") && !i) && (sb(stack_b), i++);
	(!ft_strcmp(line, "ss") && !i) && (ss(stack_a, stack_b), i++);
	(!ft_strcmp(line, "pa") && !i) && (pa(stack_a, stack_b), i++);
	(!ft_strcmp(line, "pb") && !i) && (pb(stack_a, stack_b), i++);
	(!ft_strcmp(line, "ra") && !i) && (ra(stack_a), i++);
	(!ft_strcmp(line, "rb") && !i) && (rb(stack_b), i++);
	(!ft_strcmp(line, "rr") && !i) && (rr(stack_a, stack_b), i++);
	(!ft_strcmp(line, "rra") && !i) && (rra(stack_a), i++);
	(!ft_strcmp(line, "rrb") && !i) && (rrb(stack_b), i++);
	(!ft_strcmp(line, "rrr") && !i) && (rrr(stack_a, stack_b), i++);
	free(line);
	(i == 0) && (ft_error(), 0);
	return (ft_lstsize(*stack_b));
}

int	main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;
	char	*line;
	int		size;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		return (0);
	stack_a = ft_parsing(av);
	line = get_next_line(0);
	while (line)
	{
		size = ft_helper(&stack_a, &stack_b, line);
		line = get_next_line(0);
	}
	i = 0;
	size = ft_lstsize(stack_b);
	(is_sorted(stack_a, size) == 1) && (ft_putstr("OK\n"), i++);
	(!i) && (ft_putstr("KO\n"), 0);
	my_malloc(0, 2);
	return (0);
}
