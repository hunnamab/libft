/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 13:46:46 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/09 14:53:54 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_strclr(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        s[i] = '\0';
        write(1, s[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    ft_strclr(argv[1]);
    return 0;
}