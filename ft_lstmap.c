/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 12:52:13 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/25 12:52:26 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *link;
	t_list *new;

	if (!lst)
		return (NULL);
	if (!(link = ft_lstnew(lst->content, lst->content_size)))
		return (NULL);
	link = (*f)(link);
	new = link;
	if (f)
	{
		while (lst->next)
		{
			lst = lst->next;
			link->next = ft_lstnew(lst->content, lst->content_size);
			if (!(link->next))
			{
				free(link->next);
				return (NULL);
			}
			link->next = (*f)(link->next);
			link = link->next;
		}
	}
	return (new);
}
