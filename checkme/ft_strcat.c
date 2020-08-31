/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 13:22:22 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/13 20:36:22 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
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

	printf("ft_strcat = %s\n", ft_strcat(dest, src));

	char dst[50] = "this is destination";
	char sr[] = "|and this is source";
	printf("strcat = %s\n", strcat(dst, sr));
    return 0;
}