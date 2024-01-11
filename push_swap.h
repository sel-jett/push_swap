/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jett <sel-jett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 09:56:41 by sel-jett          #+#    #+#             */
/*   Updated: 2023/12/06 17:03:38 by sel-jett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_data
{
	void			*data;
	struct s_data	*next;
}	t_data;

typedef struct s_node
{
	int				nb;
	int				index;
	struct s_node	*next;
}	t_node;

void	ft_error(void);
void	*my_malloc(size_t size, int mode);
char	*my_strtok(char *srcString, char *delim);
int		ft_atoi(const char *str);
t_node	*ft_parsing(char **av);
void	add_front(t_node **lst, t_node *neww);
t_node	*sort_three(t_node *stack_a, t_node *stack_b);
t_node	*ft_lstlast(t_node *lst);
int		ft_lstsize(t_node *lst);
t_node	*ft_lstnew(int nb);
void	ft_lstadd_back(t_node **lst, t_node *neww);
void	ft_putstr(char *str);
void	ft_swap(t_node **stack_a);
void	sa(t_node **stack_a);
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);
void	pa(t_node **stack_a, t_node **stack_b);
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);
void	rrotate(t_node **stack);
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	ft_index(t_node *stack_a);
void	rrr(t_node **stack_a, t_node **stack_b);
void	sort_3(t_node **stack);
void	rev_sort_3(t_node **stack);
void	sort_5(t_node **stack_a, t_node **stack_b);
void	ft_algo_to_b(t_node **stack_a, t_node **stack_b);
void	ft_algo_to_a(t_node **stack_a, t_node **stack_b);
void	ft_algo_five(t_node **stack_a, t_node **stack_b);
int		is_sorted(t_node *stack_a);

#endif
