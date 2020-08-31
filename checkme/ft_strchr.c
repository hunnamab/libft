/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:04:24 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/13 20:57:43 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int c)
{
	int i;
	
	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
    if (str[i] != c)
        return (NULL);
	return ((char *)str + i);
}

int main()
{
    const char str[] = "test * test2";
    const char c = '*';

    printf("ft_strchr = |%s\n", ft_strchr(str, c));
    printf("strchr = |%s\n", strchr(str, c));
    return 0;
}