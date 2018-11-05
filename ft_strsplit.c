/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 18:21:16 by kaanggas          #+#    #+#             */
/*   Updated: 2018/11/05 04:58:48 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	array_length(char *str, char delim)
{
	int		howmanywords;
	int		word;

	howmanywords = 0;
	word = 0;
	while (*str)
	{
		if (*str != delim)
		{
			howmanywords += (word) ? 0 : 1;
			word = 1;
		}
		if (*str == delim && word)
			word = 0;
		str++;
	}
	return (!howmanywords) ? howmanywords + word : howmanywords;
}

char		**ft_strsplit(char const *s, char c)
{
	char		**fresh;
	size_t		i;
	size_t		j;
	size_t		len;

	if (!s || !c)
		return (NULL);
	len = array_length((char *)s, c);
	if (!(fresh = (char **)ft_memalloc(sizeof(char *) * (len + 1))))
		return (NULL);
	j = 0;
	while (len--)
	{
		i = 0;
		while (*s == c && *s)
			s++;
		while (s[i] && s[i] != c)
			i++;
		fresh[j++] = ft_strsub(s, 0, i);
		while (*s != c && *s)
			s++;
	}
	fresh[j] = NULL;
	return (fresh);
}
