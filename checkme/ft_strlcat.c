/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 13:22:22 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/20 19:41:26 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t		ft_strlen(const char *str)
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

size_t    ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t i;
    size_t j;
    size_t len;

    i = 0;
    while (dest[i] != '\0')
        ++i;
    len = 0;
	while (src[len] != '\0')
        ++len;
    if (n <= i)
        len += n;
    else
        len += i;
    j = 0;
    while (src[j] != '\0' && i + 1 < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (len);
}

int main()
{
	char *dest = malloc(sizeof(char) * 6);
	char *src = malloc(sizeof(char) * 3);
	int	buff;
	int a = 0;
	while(a < 2)
	{
		src[a] = '1';
		dest[a] = '2';
		a++;
	}
	src[a] = '\0';
	dest[a] = '\0';
	buff = ft_strlcat(dest, src, sizeof(dest));
	printf("ft_strlcat = %d\n", buff);

	char *dst = malloc(sizeof(char) * 6);
	char *sr = malloc(sizeof(char) * 3);
	int	buf;
	int i = 0;
	while(i < 2)
	{
		sr[i] = '1';
		dst[i] = '2';
		i++;
	}
	src[i] = '\0';
	dst[i] = '\0';
	buf = strlcat(dst, sr, sizeof(dst));
	printf("strlcat = %d\n", buf);
    return 0;
}
