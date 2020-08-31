/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:52:34 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/22 17:16:21 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}

void	ft_strdel(char **as)
{
	if (as)
		ft_memdel((void **)as);
}

void    ft_bzero(void *s, size_t n)
{
	int        i;
	char    *str;

	i = 0;
	str = (char *)s;
	while (i++ < (int)n)
		*str++ = '\0';
}

void    *ft_memalloc(size_t size)
{
	void *memo;

	memo = malloc(sizeof(void) * size);
	if (memo == 0)
		return (NULL);
	ft_bzero(memo, size);
	return (memo);
}

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char    *res;
	int        i;

	i = 0;
	res = ft_memalloc(len + 1);
	if (!res)
		return (NULL);
	while (i < (int)len)
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}

size_t        ft_strlen(const char *str)
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

static size_t    ft_lenwodel(const char *str, char c)
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

static size_t    ft_delim(const char *str, char c)
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

static void		ft_free(char **arr, size_t n)
{
	while (n--)
		ft_strdel(&(arr[n]));
	free(arr);
}

char    **ft_strsplit(char const *s, char c)
{
    char      **arr;
    size_t        i;
    size_t        a;
    size_t        cnt;
    
    if (!s)
      return (NULL);
    cnt = ft_lenwodel(s, c);
    if (!(arr = (char **)ft_memalloc(sizeof(char *) * (cnt + 1))))
        return (NULL);
    i = 0;
    a = 0;
    while (cnt-- > 0)
    {
        while (s[i] == c && s[i] != '\0')
            i++;
        arr[a] = ft_strsub(s, i, ft_delim((s + i), c));
        if (arr[a] == NULL)
        {
			ft_free(arr, a);
            return (NULL);
        }
        a++;
        i = i + (ft_delim((s + i), c));
    }
    arr[a] = NULL;
    return (arr);
}

int        main()
{
	int i;

	i = 0;
	char const str[] = "***";
	char c = '*';
	char **test = ft_strsplit(str, c);
	while (i < 3)
	{
		printf("%s\n", test[i]);
		i++;
	}
	return 0;
}
