/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 14:33:52 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/13 14:47:48 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    *ft_memset(void *str, int c, size_t n)
{
    int i;
    char *st;

    i = 0;
    st = (char *)str;
    while (i < (int)n)
    {
        st[i] = c;
        i++;
    }
    return (str);
}

int main()
{
    char str[] = "this is a string";
    printf("ft_memset = %s\n", ft_memset(str, '*', 4));

    char st[] = "this is a string";
    printf("memset = %s\n", memset(st, '*', 4));
    return 0;
}