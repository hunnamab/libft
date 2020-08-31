/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 14:30:34 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/12 11:35:26 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

int main()
{
	char arr[] = "this string's length is 26";
	printf("ft_strlen = %d\n", ft_strlen(arr));
	printf("strlen = %d\n", strlen(arr));
	return 0;
}