/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:52:40 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/13 18:57:27 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

void    ft_bzero(void *s, size_t n)
{
    int i;
    char *str;

    i = 0;
    str = (char *)s;
    while (i++ < (int)n)
        *str++ = '\0';
}

void	*ft_memalloc(size_t size)
{
	void *memo;

    memo = malloc(sizeof(void) * size);
    if (memo == 0)
        return NULL;
	ft_bzero(memo, size);
	return (memo);
}

char	*ft_strnew(size_t size)
{
	char *fr_str;
	size_t i;

	i = 0;
	fr_str = ft_memalloc(size + 1);
	while (i < size)
	{
		fr_str[i] = '\0';
		i++;
	}
	return (fr_str);
}

char    *ft_strtrim(char const *s)
{
    char *res;
    int lng1;
    int i;
    int j;

    i = 0;
    j = 0;
    lng1 = ft_strlen(s);
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
        i++;
    while (s[lng1 - 1] == ' ' || s[lng1 - 1] == '\n' || s[lng1 - 1] == '\t')
        lng1--;
    res = ft_strnew(lng1 + 1);
    while (i < lng1)
    {
        res[j] = s[i];
        i++;
        j++;
    }
    res[i] = '\0';
    return (res);
}

int main() 
{
	char const s[] = "\n hel lo   \n  ";
	printf("%s", ft_strtrim(s));
	return 0;
}