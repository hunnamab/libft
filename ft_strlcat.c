/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:17:51 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/20 19:42:56 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;
	size_t len;

	i = 0;
	while (dest[i] != '\0')
		++i;
	len = 0;
	while (src[len] != '\0')
		++len;
	if (n <= i)
		len += n;
	else
		len += i;
	j = 0;
	while (src[j] != '\0' && i + 1 < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len);
}
