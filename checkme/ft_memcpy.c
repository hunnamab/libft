/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:29:18 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/18 14:44:19 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char *)str1;
	st2 = (unsigned char *)str2;
	while (n-- != 0)
		*st1++ = *st2++;
	return (str1);
}

int main()
{
    char dest[20];
    printf("ft_memcpy = |%s|\n", (char *)ft_memcpy(dest, "hello dear friends", 10));

    /*char dst[0];
    printf("memcpy = |%s|\n", (char *)memcpy(dst, "", 1));*/
    return 0;
}
