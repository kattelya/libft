/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 16:55:28 by kaanggas          #+#    #+#             */
/*   Updated: 2018/10/22 15:38:04 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*newstring;
	int 	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	/* newstring = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1)); */
	newstring = ft_strnew(ft_strlen(s));
	if (!newstring)
		return (NULL);
	while (s[i] != '\0')
	{
		newstring[i] = (*f)(s[i]);
			i++;
	}
	newstring[i] = '\0';
	return (newstring);
}

char func(char c)
{
	char k;
	k = c;
	k = 'b';
	return (k);
}

int		main()
{
	char test [14] = "Hello world";

	printf("this is the old string %s\n", test);
	printf("this is the new string %s\n", ft_strmap(test, func));
	return (0);
}
