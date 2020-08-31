/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:29:18 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/22 13:07:45 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void    *ft_memalloc(size_t size)
{
    void *memo;

    memo = malloc(sizeof(void) * size);
    if (memo == 0)
        return NULL;
    ft_bzero(memo, size);
    return (memo);
}

void    *ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
    unsigned char    *st1;
    unsigned char    *st2;
    unsigned char    stp;
    size_t            i;

    st1 = (unsigned char *)str1;
    st2 = (unsigned char *)str2;
    stp = (unsigned char)c;
    i = 0;
    if (n == 0)
        return (NULL);
    while (i < n)
    {
        if (*st2 == stp)
        {
			*st1 = *st2;
            return (str1 + (i + 1));
        }
        *st1++ = *st2++;
        i++;
    }
    return (NULL);
}

int main()
{
    int i = 0;
    char *dest1 = ft_memalloc(31);
    while (i < 30)
      dest1[i++] = 'j';
    dest1[i] = '\0';
    printf("ft_memccpy = |%s|\n", (char *)ft_memccpy(dest1, "zyxwvutsrqponmlkjihgfedcba", 'r', 20));
    /*printf("memccpy = |%s|\n\n", (char *)memccpy(dest2, "zyxwvutsrqponmlkjihgfedcba", 'r', 20));

    printf("ft_memccpy = |%s|\n", (char *)ft_memccpy(dest3, "zyxwvutsrqponmlkjihgfedcba", 'r', 3));
    printf("memccpy = |%s|\n\n", (char *)memccpy(dest4, "zyxwvutsrqponmlkjihgfedcba", 'r', 3));

    printf("ft_memccpy = |%s|\n", (char *)ft_memccpy(dest5, "zyxwvutsrqponmlkjihgfedcba", 'a', 26));
    printf("memccpy = |%s|\n\n", (char *)memccpy(dest6, "zyxwvutsrqponmlkjihgfedcba", 'a', 26));

    printf("ft_memccpy = |%s|\n", (char *)ft_memccpy(dest7, "zyxwvuzyxwvu", 'x', 20));
    printf("memccpy = |%s|\n\n", (char *)memccpy(dest8, "zyxwvuzyxwvu", 'x', 20));*/
    return 0;
}
