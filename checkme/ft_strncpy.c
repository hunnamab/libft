/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 15:24:45 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/13 20:33:20 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < ft_strlen(src) && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

int main()
{
	const char s[] = "12345 67890";
	char dst[17];

	printf("%s\n", ft_strncpy(dst, s, 20));
	return 0;
}