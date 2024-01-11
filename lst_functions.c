/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jett <sel-jett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:51:33 by sel-jett          #+#    #+#             */
/*   Updated: 2023/12/03 12:04:27 by sel-jett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_lstnew(int nb)
{
	t_node	*new;

	new = my_malloc(sizeof(t_node), 1);
	new->nb = nb;
	new->index = 0;
	new->next = NULL;
	return (new);
}

t_node	*ft_lstlast(t_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	add_front(t_node **lst, t_node *new)
{
	if (*lst)
		new->next = *lst;
	*lst = new;
}

int	ft_lstsize(t_node *lst)
{
	int	count;

	if (!lst)
		return (0);
	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*node;

	if (!lst)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	node = *lst;
	while (node->next)
	{
		if (node->nb == new->nb)
			return (ft_error());
		node = node->next;
	}
	if (node->nb == new->nb)
		return (ft_error());
	node->next = new;
}
