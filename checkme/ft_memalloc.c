/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:16:14 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/13 16:01:06 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int main()
{
	char *str;
	int i;

	i = 0;
	str = ft_memalloc(10);
	while (i < 10)
	{
		str[i] = '1';
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}