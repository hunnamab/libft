/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:52:40 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/22 19:08:57 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*res;
	int		lng;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s)
	{
		lng = ft_strlen(s);
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		while (s[lng - 1] == ' ' || s[lng - 1] == '\n' || s[lng - 1] == '\t')
			lng--;
		if (!(res = ft_strnew(lng + 1)))
			return (NULL);
		while (i < lng)
			res[j++] = s[i++];
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
