/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 17:25:12 by kaanggas          #+#    #+#             */
/*   Updated: 2018/11/05 04:46:19 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *src;

	src = (unsigned char *)s;
	while (n-- != '\0')
	{
		if (*src == (unsigned char)c)
			return (void *)src;
		src++;
	}
	return (NULL);
}
