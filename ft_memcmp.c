/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:49:22 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/23 11:51:51 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;
	size_t			i;

	st1 = (unsigned char *)arr1;
	st2 = (unsigned char *)arr2;
	i = 0;
	while (i++ < n)
	{
		if (*st1 != *st2)
			return (*st1 - *st2);
		st1++;
		st2++;
	}
	return (0);
}
