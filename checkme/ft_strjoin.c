/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:52:26 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/13 16:05:14 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

void    ft_bzero(void *s, size_t n)
{
    int i;
    char *str;

    i = 0;
    str = (char *)s;
    while (i++ < (int)n)
        *str++ = '\0';
}

void	*ft_memalloc(size_t size)
{
	void *memo;

    memo = malloc(sizeof(void) * size);
    if (memo == 0)
        return NULL;
	ft_bzero(memo, size);
	return (memo);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *res;
	int i;
	int a;

	i = 0;
	a = 0;
	res = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	while (s1[a] != '\0')
	{
		res[i] = s1[a];
		i++;
		a++;
	}
	a = 0;
	while (s2[a] != '\0')
	{
		res[i] = s2[a];
		i++;
		a++;
	}
	res[i] = '\0';
	return (res);
}

int		main()
{
	char const s1[] = "123";
	char const s2[] = "456";
	printf("%s\n", ft_strjoin(s1, s2));
	return 0;
}