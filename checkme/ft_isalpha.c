/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:50:27 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/16 17:07:19 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int     ft_isalpha(int c)
{
    if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
        return (1);
    else
        return (0);
}

int main()
{
    int a = '\t';
    int b = '   ';
    int c = 'a';
    int d = '5';

    if(ft_isalpha(a))
        printf("a = |%c| is an alphabet\n", a);
    else
        printf("a = |%c| is not an alphabet\n", a);
    if(ft_isalpha(b))
        printf("b = |%c| is an alphabet\n", b);
    else
        printf("b = |%c| is not an alphabet\n", b);
    if(ft_isalpha(c))
        printf("c = |%c| is an alphabet\n", c);
    else
        printf("c = |%c| is not an alphabet\n", c);
    if(ft_isalpha(d))
        printf("d = |%c| is an alphabet\n\n", d);
    else
        printf("d = |%c| is not an alphabet\n\n", d);

    if(isalpha(a))
        printf("a = |%c| is an alphabet\n", a);
    else
        printf("a = |%c| is not an alphabet\n", a);
    if(isalpha(b))
        printf("b = |%c| is an alphabet\n", b);
    else
        printf("b = |%c| is not an alphabet\n", b);
    if(isalpha(c))
        printf("c = |%c| is an alphabet\n", c);
    else
        printf("c = |%c| is not an alphabet\n", c);
    if(isalpha(d))
        printf("d = |%c| is an alphabet\n", d);
    else
        printf("d = |%c| is not an alphabet\n", d);
    return 0;
}