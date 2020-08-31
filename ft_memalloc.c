/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:16:14 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/13 18:31:30 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *memo;

	memo = malloc(sizeof(void) * size);
	if (memo == 0)
		return (NULL);
	ft_bzero(memo, size);
	return (memo);
}
