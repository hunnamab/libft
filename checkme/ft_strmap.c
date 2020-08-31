/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 13:01:07 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/18 13:01:07 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	int		i;
	char	*st;

	i = 0;
	st = (char *)str;
	while (i < (int)n)
	{
		st[i] = c;
		i++;
	}
	return (str);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

void	*ft_memalloc(size_t size)
{
	void *memo;

	memo = malloc(sizeof(void) * size);
	if (memo == 0)
		return (NULL);
	ft_bzero(memo, size);
	return (memo);
}

char	*ft_strnew(size_t size)
{
	char	*fr_str;
	size_t	i;

	i = 0;
	fr_str = ft_memalloc(size + 1);
	while (i < size)
	{
		fr_str[i] = '\0';
		i++;
	}
	return (fr_str);
}

size_t		ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char     ft_tolower(char c)
{
    if (c >= 'A' && c <= 'Z')
        c = c + 32;
    return (c);
}

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*str;

	i = 0;
	str = ft_strnew(ft_strlen(s));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = (*f)(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main()
{
    char s[] = "ABCD";
    char (*f)(char);
    f = &ft_tolower;
    printf("%s\n", ft_strmap(s, f));
    return 0;
}
