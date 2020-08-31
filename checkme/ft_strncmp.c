/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 15:59:05 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/20 19:09:27 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (s1[i] && s2[i]) != '\0' && i < ((int)n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main()
{
	printf("ft_strncmp = %d\n", ft_strncmp("salut", "salut", 5));
	printf("strncmp = %d\n", strncmp("salut", "salut", 5));

	printf("ft_strncmp = %d\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
	printf("strncmp = %d\n", strncmp("abcdefgh", "abcdwxyz", 4));

	printf("ft_strncmp = %d\n", ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
	printf("strncmp = %d\n", strncmp("zyxbcdefgh", "abcdwxyz", 0));

	printf("ft_strncmp = %d\n", ft_strncmp("test\200", "test\0", 6));
	printf("strncmp = %d\n", strncmp("test\200", "test\0", 6));

	printf("ft_strncmp = %d\n", ft_strncmp("abcdefgh", "", 0));
	printf("strncmp = %d\n", strncmp("abcdefgh", "", 0));

	printf("ft_strncmp = %d\n", ft_strncmp("test", "testss", 7));
	printf("strncmp = %d\n", strncmp("test", "testss", 7));
	return 0;
}