/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 20:33:52 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/18 13:47:46 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		j;
	char	*res;

	j = 0;
	while (src[j])
		j++;
	res = ft_memalloc(j + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i <= j)
	{
		res[i] = src[i];
		i++;
	}
	return (res);
}
