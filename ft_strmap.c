/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 16:55:28 by kaanggas          #+#    #+#             */
/*   Updated: 2018/11/05 04:49:49 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*newstring;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
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
