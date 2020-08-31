/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:24:10 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/12 11:35:02 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_strequ(char const *s1, char const *s2)
{
    int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;
    if (s1[i] == s2[i])
        return (1);
    else
        return (0);
}

int main()
{
    char const str1[] = "hello, my friend";
    char const str2[] = "hello, my friend";
    printf("%d\n", ft_strequ(str1, str2));
    return 0;
}