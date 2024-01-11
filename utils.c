/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jett <sel-jett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:12:16 by sel-jett          #+#    #+#             */
/*   Updated: 2023/12/03 10:13:12 by sel-jett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int			i;
	long int	num;
	int			signe;

	(1 == 1) && (i = 0, signe = 1, num = 0);
	if (str[i] == '-' || str[i] == '+')
	{
		(str[i] == '-') && (signe = -1);
		i++;
	}
	if (!str[i])
		return (ft_error(), 0);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - 48);
		if (num * signe > INT_MAX || num * signe < INT_MIN)
			return (ft_error(), 0);
		i++;
	}
	if (str[i])
		return (ft_error(), 0);
	return (num * signe);
}
