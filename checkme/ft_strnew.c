/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:29:28 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/13 16:05:45 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

char    *ft_strnew(size_t size)
{
    char *fr_str;
    size_t i;
    
    i = 0;
    fr_str = ft_memalloc(size + 1);
    while (i < size)
    {
        fr_str[i] = 'a'; /* "\0" just to check if it works */
        write(1, &fr_str[i], 1);
        i++;
    }
    return (fr_str);
}

int main()
{
    ft_strnew(20);
    return 0;
}
