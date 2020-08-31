/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 13:23:41 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/22 14:50:23 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char    *st1;
	unsigned char    *st2;
	size_t i;

	i = 0;
	st1 = (unsigned char *)dest;
	st2 = (unsigned char *)src;
	if (*st1 > *st2)
	{
	  while (n-- != 0)
		st1[n] = st2[n];
	}
	else
	{
	  while (i < n)
	  {
		st1[i] = st2[i];
		i++;
	  }
	}
	return (dest);
}

int main()
{
	char sr[] = "lorem ipsum dolor sit amet";
	char *dest;

	dest = sr + 1;
	ft_memmove(dest, sr, 9);
	printf("ft_memmove = |%s|\n", sr);

	char *dst;

	char src[] = "lorem ipsum dolor sit amet";
	dst = src + 1;
	memmove(dst, src, 9);
	printf("memmove = |%s|\n", src);
	return (0);
}