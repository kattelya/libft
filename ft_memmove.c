/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 00:57:34 by kaanggas          #+#    #+#             */
/*   Updated: 2018/09/28 23:54:35 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* copies the data first to an intermediate buffer, then from buffer to dst*/
/* If the source and destination addresses are same then left as it is.
If the source and destination addresses overlap then copy from the end (backward copy).
If the source and destination addresses do not overlap then copy from the beginning (forward a copy).*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char *source;
	char *dest;

	source = (const char*)src;
	dest = (char*)dst;
	if (source < dest) /* check if this overlap */
	{ /*if overlap then copy from end */
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
