/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:52:59 by trozain           #+#    #+#             */
/*   Updated: 2022/08/04 15:53:00 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new);

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
