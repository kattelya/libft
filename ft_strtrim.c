/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 15:44:31 by kaanggas          #+#    #+#             */
/*   Updated: 2018/11/05 04:37:10 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	int		len;
	char	*str;
	char	*buf;

	if (!s)
		return (ft_strnew(0));
	start = 0;
	end = 0;
	len = ft_strlen(s);
	while (ft_iswhitespace(s[start++]))
		;
	str = (char *)s + (ft_strlen(s) - 1);
	while (ft_iswhitespace(*str--))
		end++;
	buf = ft_strsub(s, start - 1, (len - ((start - 1) + (end))));
	return (--start == len ? ft_strnew(0) : buf);
}
