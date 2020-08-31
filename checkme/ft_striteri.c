/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 13:00:29 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/18 13:00:29 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_writesmth(unsigned int i, char *c)
{
    write(1, &c[i], 1);
}

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
  int i;

  i = 0;
  while (*s)
  {
    (*f)(i, s);
    i++;
    s++;
  }
}

int main()
{
    char s[] = "123456789";
    void (*f)(unsigned int, char *);
    f = &ft_writesmth;
    ft_striteri(s, f);
    return 0;
}
