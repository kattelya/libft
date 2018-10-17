/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 00:44:17 by kaanggas          #+#    #+#             */
/*   Updated: 2018/10/16 23:21:18 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *tmp;

	tmp = dst;
	while (n--)
	{
		*(char*)dst++ = *(const char*)src;
		if (*(const char*)src)
			src++;
	}
	return (tmp);
}
