/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:04:24 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/16 16:27:25 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char *ft_strrchr(const char *str, int c)
{
	int i;

	i = ft_strlen(str);
	while (str[i] != c && i != 0)
		i--;
	if (str[i] != c && i == 0)
		return (0);
	return ((char *)str + i);
}

int main()
{
    const char str[] = ". test . test2";
    const char c = '.';

    printf("ft_strchr = |%s\n", ft_strrchr(str, c));
	printf("strchr = |%s\n", strrchr(str, c));
    return 0;
}