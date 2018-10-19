/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 09:37:07 by kaanggas          #+#    #+#             */
/*   Updated: 2018/10/19 14:10:01 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long	result;
	long	sign;

	result = 0;
	sign = 1;
	while (*str == '\n' || *str == '\f' || *str == ' ' ||
			*str == '\r' || *str == '\v' || *str == '\t')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str)) /* *str >= '0' && *str <= '9' */
	{
		result *=  10; /* result * 10 + (*str - '0') */
		result += (*str - '0');
		str++;
	}
	/*if (*str > 19 || result == 922372036854775808ULL)
		return (sign == 1 ? -1 : 0); */
	return ((int)(result * sign));
}
