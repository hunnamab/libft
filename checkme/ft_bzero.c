/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 14:55:58 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/13 17:30:59 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

int main()
{   
    char str[] = "this is a string";
    ft_bzero(str, strlen(str));
    return 0;
}