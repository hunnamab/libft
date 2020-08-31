/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:27:28 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/22 16:31:19 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	stp;
	size_t			i;

	str = (unsigned char *)arr;
	stp = (unsigned char)c;
	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (*str == stp)
			return ((void *)&arr[i]);
		str++;
		i++;
	}
	return (NULL);
}
