/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:52:38 by trozain           #+#    #+#             */
/*   Updated: 2022/08/04 15:52:39 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new);

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*t;

	if (*alst)
	{
		t = ft_lstlast(*alst);
		t->next = &*new;
	}
	else
		*alst = new;
}
