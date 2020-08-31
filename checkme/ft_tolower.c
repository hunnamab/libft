/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:50:03 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/18 16:30:00 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int     ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        c = c + 32;
    return (c);
}

int main()
{
    int a = 'T';
    int b = 'C';
    int c = ' ';
    int d = 'd';

    printf("|T| => |%c|\n", ft_tolower(a));
    printf("|C| => |%c|\n", ft_tolower(b));
    printf("| | => |%c|\n", ft_tolower(c));
    printf("|d| => |%c|\n\n", ft_tolower(d));

    printf("|T| => |%c|\n", tolower(a));
    printf("|C| => |%c|\n", tolower(b));
    printf("| | => |%c|\n", tolower(c));
    printf("|d| => |%c|\n", tolower(d));
}
