/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 13:22:22 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/13 20:39:19 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < (int)n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char dest[50] = "this is destination";
	char src[] = "|and this is source";

	printf("ft_strncat = %s\n", ft_strncat(dest, src, 7));

	char dst[50] = "this is destination";
	char sr[] = "|and this is source";
	printf("strncat = %s\n", strncat(dst, sr, 7));
    return 0;
}