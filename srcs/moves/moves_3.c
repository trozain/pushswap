/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <trozain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by trozain           #+#    #+#             */
/*   Updated: 2022/08/04 15:58:46 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

void	rr(t_list **stack_a, t_list **stack_b, char tmp[4])
{
	ra(stack_a, stack_b, tmp);
	rb(stack_a, stack_b, tmp);
}

void	ss(t_list **stack_a, t_list **stack_b, char tmp[4])
{
	sa(stack_a, 'a', tmp);
	sb(stack_b, 'b', tmp);
}

void	rrr(t_list **stack_a, t_list **stack_b, char tmp[4])
{
	rra(stack_a, 'a', tmp);
	rrb(stack_b, 'b', tmp);
}
