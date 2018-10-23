/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 22:05:26 by kaanggas          #+#    #+#             */
/*   Updated: 2018/10/22 11:18:06 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*fresh;
	int 			len1;
	int 			len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	fresh = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (fresh)
	{
		while (*s1)
		{
			*fresh++ = *s1++;
		}
		while (*s2)
		{
			*fresh++ = *s2++;
		}
		*fresh = '\0';
		return (fresh - (len1 + len2));
	}
	return (fresh);
}
