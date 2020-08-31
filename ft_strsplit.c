/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 12:18:47 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/23 12:19:38 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_free(char **arr, size_t n)
{
	while (n--)
		ft_strdel(&(arr[n]));
	free(arr);
}

static size_t	ft_lenwodel(const char *str, char c)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		while (str[i] != c && str[i] != '\0')
			i++;
		len++;
		if (str[i] == '\0' && str[i - 1] == c)
			len--;
	}
	return (len);
}

static size_t	ft_delim(const char *str, char c)
{
	size_t i;

	i = 0;
	while (*str != c && *str)
	{
		i++;
		str++;
	}
	return (i);
}

static char		*ft_delitdel(char const *s, char c)
{
	while (*s == c && *s)
		s++;
	return ((char *)s);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**arr;
	size_t	a;
	size_t	cnt;

	if (!s)
		return (NULL);
	cnt = ft_lenwodel(s, c);
	if (!(arr = (char **)ft_memalloc(sizeof(char *) * (cnt + 1))))
		return (NULL);
	a = 0;
	while (cnt-- > 0)
	{
		s = ft_delitdel(s, c);
		arr[a] = ft_strsub(s, 0, ft_delim(s, c));
		if (arr[a] == NULL)
		{
			ft_free(arr, a);
			return (NULL);
		}
		a++;
		s = s + (ft_delim(s, c));
	}
	arr[a] = NULL;
	return (arr);
}
