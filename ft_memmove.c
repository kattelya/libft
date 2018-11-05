/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 00:57:34 by kaanggas          #+#    #+#             */
/*   Updated: 2018/11/05 04:20:23 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*source;
	char		*dest;

	source = (const char*)src;
	dest = (char*)dst;
	if (source < dest)
	{
		source = source + len - 1;
		dest = dest + len - 1;
		while (len--)
		{
			*dest-- = *source--;
		}
	}
	else
	{
		while (len--)
			*dest++ = *source++;
	}
	return (dst);
}
