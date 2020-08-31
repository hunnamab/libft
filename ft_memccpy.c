/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 11:24:11 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/22 13:10:40 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;
	unsigned char	stp;
	size_t			i;

	st1 = (unsigned char *)str1;
	st2 = (unsigned char *)str2;
	stp = (unsigned char)c;
	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (*st2 == stp)
		{
			*st1 = *st2;
			return (str1 + (i + 1));
		}
		*st1++ = *st2++;
		i++;
	}
	return (NULL);
}
