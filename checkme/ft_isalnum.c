/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:50:27 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/20 16:18:55 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (NULL);
}

int main()
{
    int a = '&';
    int b = '  ';
    int c = 'a';
    int d = '5';

    if(ft_isalnum(a))
        printf("a = |%c| is alphanumeric\n", a);
    else
        printf("a = |%c| is not alphanumeric\n", a);
    if(ft_isalnum(b))
        printf("b = |%c| is alphanumeric\n", b);
    else
        printf("b = |%c| is not alphanumeric\n", b);
    if(ft_isalnum(c))
        printf("c = |%c| is alphanumeric\n", c);
    else
        printf("c = |%c| is not alphanumeric\n", c);
    if(ft_isalnum(d))
        printf("d = |%c| is alphanumeric\n\n", d);
    else
        printf("d = |%c| is not alphanumeric\n\n", d);

    if(isalnum(a))
        printf("a = |%c| is alphanumeric\n", a);
    else
        printf("a = |%c| is not alphanumeric\n", a);
    if(isalnum(b))
        printf("b = |%c| is alphanumeric\n", b);
    else
        printf("b = |%c| is not alphanumeric\n", b);
    if(isalnum(c))
        printf("c = |%c| is alphanumeric\n", c);
    else
        printf("c = |%c| is not alphanumeric\n", c);
    if(isalnum(d))
        printf("d = |%c| is alphanumeric\n", d);
    else
        printf("d = |%c| is not alphanumeric\n", d);
    return 0;
}