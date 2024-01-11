/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jett <sel-jett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:13:10 by sel-jett          #+#    #+#             */
/*   Updated: 2023/12/03 15:36:25 by sel-jett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	char	*s;

	i = 0;
	s = my_strtok(s1, "\n");
	if (!s)
		return (ft_error(), 0);
	while (s[i] && s[i] == s2[i])
		i++;
	return (s[i] - s2[i]);
}

int	is_sorted(t_node *stack_a, int size)
{
	if (!stack_a)
		return (0);
	while (stack_a->next)
	{
		if (stack_a->nb > stack_a->next->nb)
			return (0);
		stack_a = stack_a->next;
	}
	if (size == 0)
		return (1);
	return (0);
}
