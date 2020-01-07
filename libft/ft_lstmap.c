/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaukkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 19:18:53 by tlaukkan          #+#    #+#             */
/*   Updated: 2019/10/31 12:07:06 by tlaukkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *tmp;

	if (!lst || !f)
		return (NULL);
	if (!(new = ft_lstnew(f(lst)->content, f(lst)->content_size)))
		return (NULL);
	lst = lst->next;
	tmp = new;
	while (lst)
	{
		if (!(new->next = ft_lstnew(f(lst)->content, f(lst)->content_size)))
			return (NULL);
		new = new->next;
		lst = lst->next;
	}
	return (tmp);
}
