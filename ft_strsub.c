/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:52:37 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/22 18:49:00 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	res = ft_memalloc(len + 1);
	if (!res)
		return (NULL);
	while (i < (int)len)
	{
		res[i] = s[start];
		i++;
		start++;
	}
	return (res);
}
