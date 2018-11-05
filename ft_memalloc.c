/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 08:59:52 by kaanggas          #+#    #+#             */
/*   Updated: 2018/11/04 21:26:35 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*memalloc;

	memalloc = malloc(size);
	if (!memalloc)
		return (NULL);
	ft_bzero(memalloc, size);
	return (memalloc);
}
