/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 21:39:47 by kaanggas          #+#    #+#             */
/*   Updated: 2018/10/17 22:51:28 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char *tmp;

	tmp = needle;
	
	if (ft_strcmp(needle,  /*no needle in haystack */)
			return (NULL);
	if (!needle == '\0') /* needle is empty string? */
		return (*haystack);
	if (needle)
		return (tmp);
}

int		main()
{
	const char *haystack = "Foo Bar Barz";
	const char *needle = "Bar";
	char *ptr;

	printf("find needle in haystack = %s\n", needle);
	printf("find needle in haystack 2 = %s\n", ft_strstr(needle));
	return (0);
}
