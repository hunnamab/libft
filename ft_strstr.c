/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 17:16:57 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/23 11:37:08 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *fnd)
{
	const char *str2;
	const char *fnd2;

	if (*fnd == '\0')
		return ((char *)str);
	while (*str)
	{
		str2 = str;
		fnd2 = fnd;
		while (*str2 == *fnd2 && *fnd2)
		{
			str2++;
			fnd2++;
		}
		if (*fnd2 == '\0')
			return ((char *)str);
		str++;
	}
	return (NULL);
}
