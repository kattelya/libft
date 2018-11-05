/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 02:20:27 by kaanggas          #+#    #+#             */
/*   Updated: 2018/11/05 03:00:08 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	locatelast;

	locatelast = ft_strlen(s) + 1;
	while (locatelast-- >= 0)
		if (s[locatelast] == (char)c)
			return ((char *)&(s[locatelast]));
	return (0);
}
