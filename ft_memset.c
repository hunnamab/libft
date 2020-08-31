/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 14:33:52 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/16 18:10:12 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int		i;
	char	*st;

	i = 0;
	st = (char *)str;
	while (i < (int)n)
	{
		st[i] = c;
		i++;
	}
	return (str);
}
