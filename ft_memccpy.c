/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 15:25:20 by kaanggas          #+#    #+#             */
/*   Updated: 2018/10/16 23:31:53 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tmpdst;
	const char		*tmpsrc;

	tmpdst = (unsigned char *)dst;
	tmpsrc = (const char *)src;
	while (n--)
	{
		if ((*tmpdst++ = *tmpsrc++) == (unsigned char)c)
			return (tmpdst);
	}
	return (NULL);
}
