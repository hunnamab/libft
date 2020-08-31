/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:29:03 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/20 19:55:51 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t		ft_strlen(char const *str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;
    int cnt;

	i = 0;
    cnt = 0;
	if (ft_strlen(s1) < n || ft_strlen(s2) < n)
	{
		while (s1[i] == s2[i])
			i++;
	}
	else
	{
		while (s1[i] == s2[i] && cnt < ((int)n - 1))
		{
			i++;
			cnt++;
		}
	}
	if (s1[i] == s2[i])
		return (1);
	else
		return (0);
}

int		main()
{
	char const str1[] = "tex tez";
	char const str2[] = "tez";
	printf("%d\n", ft_strnequ(str1, str2, 2));
	return 0;
}