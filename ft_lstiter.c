/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 12:51:40 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/25 12:59:30 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (f)
	{
		while (lst)
		{
			(*f)(lst);
			lst = lst->next;
		}
	}
	return (NULL);
}
