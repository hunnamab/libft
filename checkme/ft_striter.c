/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 13:00:16 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/18 13:00:16 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_writesmth(char *c)
{
    write(1, &c[0], 1);
}

void    ft_striter(char *s, void (*f)(char *))
{
    while (*s)
    {
      (*f)(s);
      s++;
    }
}

int main()
{
    char s[] = "ksd";
    void (*f)(char *);
    f = &ft_writesmth;
    ft_striter(s, f);
    return 0;
}
