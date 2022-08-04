/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:56:11 by trozain           #+#    #+#             */
/*   Updated: 2022/08/04 15:56:13 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *));

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del((void *)&lst->content);
	free(lst);
}
