/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:52:48 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/20 12:17:37 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    *ft_memset(void *str, int c, size_t n)
{
    int i;
    char *st;

    i = 0;
    st = (char *)str;
    while (i < (int)n)
    {
        st[i] = c;
        i++;
    }
    return (str);
}

void    ft_bzero(void *s, size_t n)
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

int	ft_len(int n)
{
	size_t i;

	i = 0;
	if (n < 0)
	{
		if (n == -2147483648)
			return (11);
		i++;
		n = n * -1;
		ft_len(n);
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

int		negvalue(int n)
{
	if (n == -2147483648)
		n = 147483648;
	else
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	i;

	i = ft_len(n);
	res = ft_memalloc(i + 1);
	if (!res)
		return (NULL);
	res[i--] = '\0';
	while (i > 0)
	{
		if (n < 0)
		{
			res[0] = '-';
			if (n == -2147483648)
				res[1] = '2';
			n = negvalue(n);
		}
		res[i--] = (n % 10) + '0';
		n = n / 10;
		(i == 1 && res[i] == '2') ? i-- : i;
	}
	(res[i] != '-') ? (res[i] = n + '0') : res[i];
	return (res);
}

int main()
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(9485767));
	printf("%s\n", ft_itoa(-256648));
	return 0;
}