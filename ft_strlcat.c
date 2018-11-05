/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 21:45:46 by kaanggas          #+#    #+#             */
/*   Updated: 2018/11/05 04:22:00 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*tmpdst;
	const char	*tmpsrc;
	size_t		n;
	size_t		len;

	tmpdst = dst;
	tmpsrc = src;
	n = dstsize;
	while (n-- && *tmpdst)
		tmpdst++;
	len = tmpdst - dst;
	n = dstsize - len;
	if (n == 0)
		return (len + ft_strlen(tmpsrc));
	while (*tmpsrc != '\0')
	{
		if (n != 1)
		{
			*tmpdst++ = *tmpsrc;
			n--;
		}
		tmpsrc++;
	}
	*tmpdst = '\0';
	return (len + (tmpsrc - src));
}
