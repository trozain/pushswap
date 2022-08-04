/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:51:59 by trozain           #+#    #+#             */
/*   Updated: 2022/08/04 15:52:01 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"

long			ft_atol(const char *str);

static int		ft_strlen_nbr(const char *str);

long	ft_atol(const char *str)
{
	int			neg;
	long int	nb;

	nb = 0;
	neg = 1;
	while ((9 <= *str && *str <= 13) || *str == 32)
		++str;
	if (*str == '-')
	{
		neg *= -1;
		++str;
	}
	else if (*str == '+')
		++str;
	if (ft_strlen_nbr(str) > 19 && neg < 0)
		return (0);
	if (ft_strlen_nbr(str) > 19 && neg > 0)
		return (-1);
	while ('0' <= *str && *str <= '9')
	{
		nb = (nb * 10) + (*str - '0');
		++str;
	}
	return (nb * neg);
}

static int	ft_strlen_nbr(const char *str)
{
	int	i;

	i = 0;
	while (str[i] && ft_isdigit(str[i]))
		++i;
	return (i);
}
