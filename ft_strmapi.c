/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 15:00:23 by kaanggas          #+#    #+#             */
/*   Updated: 2018/11/05 04:29:36 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstring;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	newstring = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!newstring)
		return (NULL);
	while (s[i] != '\0')
	{
		newstring[i] = (*f)(i, s[i]);
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}
