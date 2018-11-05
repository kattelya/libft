/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 01:20:04 by kaanggas          #+#    #+#             */
/*   Updated: 2018/11/05 04:44:20 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		size;
	int		negative;
	int		tmp;
	char	*result;

	negative = 0;
	if (n < 0)
		negative = 1;
	tmp = n;
	size = 1;
	while ((tmp /= 10))
		size++;
	result = ft_strnew(size + negative);
	if (result == NULL)
		return (NULL);
	if (negative)
		result[0] = '-';
	while (size--)
	{
		result[size + negative] = (negative ? -(n % 10) : (n % 10)) + '0';
		n /= 10;
	}
	return (result);
}
