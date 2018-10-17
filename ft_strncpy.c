/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 03:47:40 by kaanggas          #+#    #+#             */
/*   Updated: 2018/10/16 23:30:32 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *ptr;

	ptr = dst;
	while (len--)
	{
		*dst++ = *src;
		if (*src)
			src++;
	}
	return (ptr);
}
