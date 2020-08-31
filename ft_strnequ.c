/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:23:43 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/22 18:46:59 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;
	int cnt;

	i = 0;
	cnt = 0;
	if (s1 && s2)
	{
		if (n == 0)
			return (1);
		if (ft_strlen(s1) < n || ft_strlen(s2) < n)
		{
			while (s1[i] == s2[i] && (s1[i] && s2[i]) != '\0')
				i++;
		}
		else
		{
			while (s1[i] == s2[i] && cnt++ < ((int)n - 1))
				i++;
		}
		if (s1[i] == s2[i])
			return (1);
	}
	return (0);
}
