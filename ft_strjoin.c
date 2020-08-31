/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:52:26 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/22 19:06:04 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		a;

	i = 0;
	a = 0;
	if (s1 && s2)
	{
		if (!(res = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
			return (NULL);
		while (s1[a] != '\0')
			res[i++] = s1[a++];
		a = 0;
		while (s2[a] != '\0')
			res[i++] = s2[a++];
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
