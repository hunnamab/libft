/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 12:50:03 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/25 12:50:36 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *link;

	link = *alst;
	if (*alst && alst && del)
	{
		while (link)
		{
			(*del)(link->content, link->content_size);
			free(link);
			link = link->next;
		}
		*alst = NULL;
	}
}
