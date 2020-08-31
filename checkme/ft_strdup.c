/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 20:33:52 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/13 16:04:47 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

char	*ft_strdup(const char *src)
{
	int		i;
	int		j;
	char	*res;

	j = 0;
	while (src[j])
		j++;
	res = ft_memalloc(j + 1);
	i = 0;
	while (i <= j)
	{
		res[i] = src[i];
		i++;
	}
	return (res);
}

int main()
{
	const char str[] = "duplicate this";
	printf("ft_strdup = %s\n", ft_strdup(str));
	printf("strdup = %s\n", strdup(str));
	return 0;
}
