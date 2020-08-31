/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:32:35 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/22 17:23:50 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;
	int				i;

	st1 = (unsigned char *)arr1;
	st2 = (unsigned char *)arr2;
	i = 0;
	if (n == 0)
		return (0);
	while (st1[i] == st2[i] && (st1[i] && st2[i]) != '\0' && i < (int)n)
		i++;
	return (st1[i] - st2[i]);
}

int main()
{
	printf("%d\n", ft_memcmp("123", "789 123", 3));
	printf("%d\n", memcmp("123", "789 123", 3));
	return (0);
}
