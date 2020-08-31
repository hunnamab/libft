/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:25:11 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/18 13:43:26 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*fr_str;
	size_t	i;

	i = 0;
	fr_str = ft_memalloc(size + 1);
	if (!fr_str)
		return (NULL);
	while (i < size)
	{
		fr_str[i] = '\0';
		i++;
	}
	return (fr_str);
}
