/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:52:48 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/22 13:57:45 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
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

static int	negvalue(int n)
{
	if (n == -2147483648)
		n = 147483648;
	else
		return (-n);
	return (n);
}

char		*ft_itoa(int n)
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
