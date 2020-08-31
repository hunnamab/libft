/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:50:27 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/16 17:44:21 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 0x7F)
		return (1);
	else
		return (0);
}

int main()
{
    int a = '&';
    int b = '\t';
    int c = 'a';
    int d = 180;

    if(ft_isascii(a))
        printf("a = |%c| is ascii defined\n", a);
    else
        printf("a = |%c| is not ascii defined\n", a);
    if(ft_isascii(b))
        printf("b = |%c| is ascii defined\n", b);
    else
        printf("b = |%c| is not ascii defined\n", b);
    if(ft_isascii(c))
        printf("c = |%c| is ascii defined\n", c);
    else
        printf("c = |%c| is not ascii defined\n", c);
    if(ft_isascii(d))
        printf("d = |%c| is ascii defined\n\n", d);
    else
        printf("d = |%c| is not ascii defined\n\n", d);

    if(isascii(a))
        printf("a = |%c| is ascii defined\n", a);
    else
        printf("a = |%c| is not ascii defined\n", a);
    if(isascii(b))
        printf("b = |%c| is ascii defined\n", b);
    else
        printf("b = |%c| is not ascii defined\n", b);
    if(isascii(c))
        printf("c = |%c| is ascii defined\n", c);
    else
        printf("c = |%c| is not ascii defined\n", c);
    if(isascii(d))
        printf("d = |%c| is ascii defined\n", d);
    else
        printf("d = |%c| is not ascii defined\n", d);
    return 0;
}