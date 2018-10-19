/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 23:25:55 by kaanggas          #+#    #+#             */
/*   Updated: 2018/10/18 16:26:26 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	if (!s || !*s)
		return ;
	if (*s != '\0')
	ft_bzero(s, ft_strlen(s));
/*	while (*s)
		*s++ = '\0';
*/
}