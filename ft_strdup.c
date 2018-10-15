/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 04:09:50 by kaanggas          #+#    #+#             */
/*   Updated: 2018/09/18 17:42:52 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *dup;
	
	dup = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (dup == NULL)
	{	
		return (NULL);
	}
	ft_strcpy(dup, s1);
	return (dup);
}

/* on the ofchance if not allocates enough memory for a copy to happen then return 
 * NULL)
 * dup = allocates enough memory for a s1 to copy itself and return a pointer to it */

