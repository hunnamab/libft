/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:50:27 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/16 17:46:32 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isprint(int c)
{
	if (c >= 0x20 && c <= 0x7E)
		return (1);
	else
		return (0);
}

int main()
{
    int a = '&';
    int b = '\t';
    int c = 'a';
    int d = ' ';

    if(ft_isprint(a))
        printf("a = |%c| can be printed\n", a);
    else
        printf("a = |%c| cannot be printed\n", a);
    if(ft_isprint(b))
        printf("b = |%c| can be printed\n", b);
    else
        printf("b = |%c| cannot be printed\n", b);
    if(ft_isprint(c))
        printf("c = |%c| can be printed\n", c);
    else
        printf("c = |%c| cannot be printed\n", c);
    if(ft_isprint(d))
        printf("d = |%c| can be printed\n\n", d);
    else
        printf("d = |%c| cannot be printed\n\n", d);

    if(isprint(a))
        printf("a = |%c| can be printed\n", a);
    else
        printf("a = |%c| cannot be printed\n", a);
    if(isprint(b))
        printf("b = |%c| can be printed\n", b);
    else
        printf("b = |%c| cannot be printed\n", b);
    if(isprint(c))
        printf("c = |%c| can be printed\n", c);
    else
        printf("c = |%c| cannot be printed\n", c);
    if(isprint(d))
        printf("d = |%c| can be printed\n", d);
    else
        printf("d = |%c| cannot be printed\n", d);
    return 0;
}