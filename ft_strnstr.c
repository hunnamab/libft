/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 17:16:57 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/25 15:30:55 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *fnd, size_t n)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen((char *)fnd);
	if (!*str && *fnd)
		return (NULL);
	if (!*fnd)
		return ((char *)str);
	while (i < n)
	{
		while (*str != *fnd && i++ < n && *str != '\0')
			str++;
		if (ft_strncmp(str, fnd, len) == 0 && (n - i) >= len)
			return ((char *)str);
		if (*str == '\0')
			return (NULL);
		else
			str++;
	}
	return (NULL);
}
