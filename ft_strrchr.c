/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:04:24 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/16 16:27:43 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;

	i = ft_strlen(str);
	while (str[i] != c && i != 0)
		i--;
	if (str[i] != c && i == 0)
		return (0);
	return ((char *)str + i);
}
