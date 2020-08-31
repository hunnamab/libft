/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 17:16:57 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/22 11:35:25 by hunnamab         ###   ########.fr       */
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

char	*ft_strstr(const char *str, const char *fnd)
{
	if (!*str && *fnd)
		return (NULL);
	if (!*fnd)
		return ((char *)str);
	while (*str && *fnd)
	{
		while (*str != *fnd && *str)
			str++;
		if (ft_strncmp(str, fnd, ft_strlen(fnd)) == 0)
			return ((char *)str);
		else
			return (NULL);
	}
}

int main()
{
	printf("ft_strstr = |%s|\n", ft_strstr("lorem ipsum dolor sit amet", "ipsumm"));
	printf("strstr = |%s|\n\n", strstr("lorem ipsum dolor sit amet", "ipsumm"));

	printf("ft_strstr = |%s|\n", ft_strstr("how are you", ""));
	printf("strstr = |%s|\n\n", strstr("how are you", ""));

	printf("ft_strstr = |%s|\n", ft_strstr("how are you", "are"));
	printf("strstr = |%s|\n\n", strstr("how are you", "are"));

	printf("ft_strstr = |%s|\n", ft_strstr("", "are"));
	printf("strstr = |%s|\n\n", strstr("", "are"));

	printf("ft_strstr = |%s|\n", ft_strstr("", ""));
	printf("strstr = |%s|\n\n", strstr("", ""));

	printf("ft_strstr = |%s|\n", ft_strstr("are you", "are you"));
	printf("strstr = |%s|\n\n", strstr("are you", "are you"));

	printf("ft_strstr = |%s|\n", ft_strstr("lorem ipsum dolor sit amet", "consectetur"));
	printf("strstr = |%s|\n\n", strstr("lorem ipsum dolor sit amet", "consectetur"));
	return (0);
}
