/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:50:27 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/16 17:13:08 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int     ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
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

    if(ft_isdigit(a))
        printf("a = |%c| is a digit\n", a);
    else
        printf("a = |%c| is not a digit\n", a);
    if(ft_isdigit(b))
        printf("b = |%c| is a digit\n", b);
    else
        printf("b = |%c| is not a digit\n", b);
    if(ft_isdigit(c))
        printf("c = |%c| is a digit\n", c);
    else
        printf("c = |%c| is not a digit\n", c);
    if(ft_isdigit(d))
        printf("d = |%c| is a digit\n\n", d);
    else
        printf("d = |%c| is not a digit\n\n", d);

    if(isdigit(a))
        printf("a = |%c| is a digit\n", a);
    else
        printf("a = |%c| is not a digit\n", a);
    if(isdigit(b))
        printf("b = |%c| is a digit\n", b);
    else
        printf("b = |%c| is not a digit\n", b);
    if(isdigit(c))
        printf("c = |%c| is a digit\n", c);
    else
        printf("c = |%c| is not a digit\n", c);
    if(isdigit(d))
        printf("d = |%c| is a digit\n", d);
    else
        printf("d = |%c| is not a digit\n", d);
    return 0;
}