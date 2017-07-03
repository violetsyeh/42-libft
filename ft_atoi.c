/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyeh <vyeh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 17:11:29 by vyeh              #+#    #+#             */
/*   Updated: 2017/07/02 18:17:04 by vyeh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_overflow(unsigned long nbr, int new_digit, int sign)
{
	if (sign == 1)
		if ((nbr >= 922337203685477580 && new_digit > 7)
			|| (nbr >= 922337203685477581))
			return (-1);
	if (sign == -1)
		if ((nbr >= 922337203685477580 && new_digit > 8)
			| (nbr >= 922337203685477581))
			return (0);
	return (1);
}

int		ft_space(int c)
{
	return ((c == '\n') || (c == '\t') || (c == '\v') ||
			(c == ' ') || (c == '\f') || (c == '\r'));
}

int			ft_atoi(const char *str)
{
	unsigned long	nbr;
	int				sign;
	int				overflow;

	nbr = 0;
	sign = 1;
	while (ft_space(*str))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		overflow = check_overflow(nbr, (*str - '0'), sign);
		if (overflow != 1)
			return (overflow);
		nbr = (nbr * 10) + (*str++ - '0');
	}
	return (nbr * sign);
}
