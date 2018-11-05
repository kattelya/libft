/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 03:51:04 by kaanggas          #+#    #+#             */
/*   Updated: 2018/11/05 04:36:15 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	if (!*needle)
		return ((char *)haystack);
	if (!*haystack)
		return (NULL);
	i = 0;
	n = ft_strlen(needle);
	while (((i + n) <= len) && *haystack)
	{
		if (ft_memcmp(haystack, needle, n) == 0)
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (NULL);
}
