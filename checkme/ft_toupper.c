/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:50:03 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/18 16:30:14 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int     ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        c = c - 32;
    return (c);
}

int main()
{
    int a = 'a';
    int b = 'g';
    int c = ' ';
    int d = 'D';

    printf("|a| => |%c|\n", ft_toupper(a));
    printf("|g| => |%c|\n", ft_toupper(b));
    printf("| | => |%c|\n", ft_toupper(c));
    printf("|D| => |%c|\n\n", ft_toupper(d));

    printf("|a| => |%c|\n", toupper(a));
    printf("|g| => |%c|\n", toupper(b));
    printf("| | => |%c|\n", toupper(c));
    printf("|D| => |%c|\n", toupper(d));
}