/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 01:56:15 by kaanggas          #+#    #+#             */
/*   Updated: 2018/10/22 21:24:12 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*dst;	
	unsigned int start;

	start = 0;
	while(ft_iswhitespace(*s))
		s++;
	if (!s)
		return (ft_strnew(1));
	dst = ft_strnew(strlen(s));
	return (dst);
}
