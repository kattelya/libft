/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 18:27:09 by kaanggas          #+#    #+#             */
/*   Updated: 2018/11/11 00:32:44 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*body;

	if (!lst || !f)
		return (NULL);
	body = f(lst);
	head = body;
	while ((lst = lst->next))
	{
		head->next = f(lst);
		head = head->next;
	}
	return (body);
}
