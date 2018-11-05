/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 21:39:47 by kaanggas          #+#    #+#             */
/*   Updated: 2018/11/05 04:54:02 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t n;
	size_t i;

	i = 0;
	n = ft_strlen(haystack);
	if (!*needle)
		return ((char *)haystack);
	if (needle == haystack)
		return ((char *)haystack);
	while (i < n)
	{
		if (ft_memcmp((&haystack[i]), needle, ft_strlen(needle)) == 0)
			return (&((char *)haystack)[i]);
		i++;
	}
	return (NULL);
}
