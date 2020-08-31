/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunnamab <hunnamab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:53:58 by hunnamab          #+#    #+#             */
/*   Updated: 2019/09/12 11:14:31 by hunnamab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putchar_fd('-', fd);
			ft_putchar_fd('2', fd);
			ft_putnbr_fd(147483648, fd);
		}
		else
		{
			ft_putchar_fd('-', fd);
			ft_putnbr_fd(n * -1, fd);
		}
	}
	else
	{
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}

void	ft_putnbr(int n)
{
	ft_putnbr_fd(n, 1);
}

int main()
{
	ft_putnbr(12345678);
	ft_putchar_fd('\n', 1);
	ft_putnbr(-2147483648);
	ft_putchar_fd('\n', 1);
	ft_putnbr(-200);
	ft_putchar_fd('\n', 1);
	ft_putnbr(0);
	ft_putchar_fd('\n', 1);
	return (0);
}
