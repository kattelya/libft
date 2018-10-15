/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 23:30:37 by kaanggas          #+#    #+#             */
/*   Updated: 2018/09/24 00:43:07 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* write 0s to a byte string */ 
/* write "n" 0 bytes to the string & if "n" = 0, bzero() do nth*/ 

void	ft_bzero(void *s, size_t n)
{
	char *str;

	str = s;
	while (n--)
	{
		*str++ = '\0';
	}
}
