/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 15:59:05 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/20 19:53:28 by hunnamab         ###   ########.fr       */
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

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main()
{
	printf("ft_strcmp = %d\n", ft_strcmp("test\200", "test\0"));
	printf("strcmp = %d\n", strcmp("test\200", "test\0"));

	printf("ft_strcmp = %d\n", ft_strcmp("salut", "salut"));
	printf("strcmp = %d\n", strcmp("salut", "salut"));

	printf("ft_strcmp = %d\n", ft_strcmp("test", "testss"));
	printf("strcmp = %d\n", strcmp("test", "testss"));

	printf("ft_strcmp = %d\n", ft_strcmp("", "test"));
	printf("strcmp = %d\n", strcmp("", "test"));
	return 0;
}