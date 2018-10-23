/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 16:23:05 by kaanggas          #+#    #+#             */
/*   Updated: 2018/10/22 15:38:50 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	size_t	i;

	i = 0;
	fresh = ft_strnew(len);
	if (!s || !fresh)
		return (NULL);
	while(i < len)
	{
		fresh[i] = s[i + start];
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}

/*int		main()
{
	char test [20] = "Hello world";
	printf("print the first 4 letters %s\n", ft_strsub(test, 0, 4));
	return (0);
} */
