/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 17:16:57 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/22 11:52:50 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t		ft_strlen(char *str)
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

char	*ft_strnstr(const char *str, const char *fnd, size_t n)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen((char *)fnd);
	if (!*str && *fnd)
		return (NULL);
	if (!*fnd)
		return ((char *)str);
	while (i < n)
	{
		while (*str != *fnd && i++ < n)
			str++;
		if (ft_strncmp(str, fnd, len) == 0 && (n - i) >= len)
			return ((char *)str);
		else
			return (NULL);
	}
	return (NULL);
}

int main()
{
	printf("ft_strnstr = %s\n", ft_strnstr("how are you", "are", 5));
	printf("strnstr = %s\n\n", strnstr("how are you", "are", 5));

	printf("ft_strnstr = %s\n", ft_strnstr("how are you", "are", 7));
	printf("strnstr = %s\n\n", strnstr("how are you", "are", 7));

	printf("ft_strnstr = %s\n", ft_strnstr("how are you", "", 5));
	printf("strnstr = %s\n\n", strnstr("how are you", "", 5));

	printf("ft_strnstr = %s\n", ft_strnstr("", "how", 12));
	printf("strnstr = %s\n\n", strnstr("", "how", 12));

	printf("ft_strnstr = %s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	printf("strnstr = %s\n\n", strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	return (0);
}
