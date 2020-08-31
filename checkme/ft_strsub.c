/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:52:37 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/18 18:33:29 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *res;
    int i;

    i = 0;
    res = ft_memalloc(len + 1);
    while (i < (int)len)
    {
        res[i] = s[start];
        i++;
        start++;
    }
    res[i] = '\0';
    return (res);
}

int     main()
{
    char const str[] = "this string contains 30 chars";
    printf("%s\n", ft_strsub(str, 5, 10));
    return 0;
}