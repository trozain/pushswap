/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <trozain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 10:01:37 by trozain           #+#    #+#             */
/*   Updated: 2022/08/04 15:57:39 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"../includes/push_swap.h"

void	ft_range(t_list **stack_a)
{
	int		*arr;

	arr = malloc(ft_lstsize(*stack_a) * sizeof(int));
	if (!arr)
		return ;
	fill(stack_a, arr);
	median_sort(arr, ft_lstsize(*stack_a));
	rank(stack_a, arr);
	free (arr);
}

void	fill(t_list **stack, int *arr)
{
	int		i;
	t_list	*current;

	i = 0;
	current = *stack;
	while (current)
	{
		arr[i] = current->content;
		++i;
		current = current->next;
	}
}

void	rank(t_list **stack, int *arr)
{
	int		i;
	int		finish;
	t_list	*current;
	t_list	*start;

	i = 0;
	finish = ft_lstsize(*stack);
	start = *stack;
	while (i < finish)
	{
		current = start;
		while (current)
		{
			if (current->num == arr[i])
			{
				current->content = i;
				break ;
			}
			else
				current = current->next;
		}
		++i;
	}
}

void	median_sort(int *array, int n)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	temp = 0;
	while (i < n)
	{
		j = 0;
		while (j < n - 1)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
