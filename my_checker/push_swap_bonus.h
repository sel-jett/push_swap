/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jett <sel-jett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:36:49 by sel-jett          #+#    #+#             */
/*   Updated: 2023/12/03 15:36:05 by sel-jett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

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

size_t	ft_strlen(char *str);
char	*my_strcpy(char *s1, char *s2, char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_read_all(int fd, char *str);
char	*get_next_line(int fd);
int		find_line(char *str);
char	*get_the_line(char *str);
char	*get_the_rest(char *str, size_t size);
int		ft_str_line(char *str);
void	ft_error(void);
void	*my_malloc(size_t size, int mode);
char	*my_strtok(char *srcString, char *delim);
int		ft_atoi(const char *str);
t_node	*ft_parsing(char **av);
void	add_front(t_node **lst, t_node *neww);
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
int		ft_strcmp(char *s1, char *s2);
int		is_sorted(t_node *stack_a, int size);

#endif
