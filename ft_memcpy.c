/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:29:18 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/23 11:44:31 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char *)str1;
	st2 = (unsigned char *)str2;
	if (!st1 && !st2)
		return (NULL);
	while (n-- != 0)
		*st1++ = *st2++;
	return (str1);
}
