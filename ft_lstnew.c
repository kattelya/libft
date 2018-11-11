/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 01:09:52 by kaanggas          #+#    #+#             */
/*   Updated: 2018/11/07 01:20:18 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	if ((lst = (t_list *)malloc(sizeof(t_list) * content_size)))
	{
		if (content)
			(lst->content = (void *)malloc(content_size)) ?
				ft_memcpy(lst->content, content, content_size) :
				NULL;
		else
			lst->content = NULL;
		lst->content_size = lst->content ? content_size : 0;
		lst->next = NULL;
	}
	return (lst);
}
