/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 14:16:38 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/23 12:23:31 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;
	size_t			i;

	i = 0;
	st1 = (unsigned char *)dest;
	st2 = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (st1 > st2)
	{
		while (n-- != 0)
			st1[n] = st2[n];
	}
	else
	{
		while (i < n)
		{
			st1[i] = st2[i];
			i++;
		}
	}
	return (dest);
}
