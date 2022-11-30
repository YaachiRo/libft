/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelfag <idelfag@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 07:13:08 by idelfag           #+#    #+#             */
/*   Updated: 2022/11/30 10:54:50 by idelfag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	int i;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd(('-'), fd);
			n *= -1;
			ft_putnbr_fd(n, fd);
			i++;
		}
		else if (n < 10)
		{
			ft_putchar_fd((n + 48), fd);
			i++;
		}
		else
		{
			ft_putnbr_fd((n / 10), fd);
			ft_putchar_fd((n % 10 + 48), fd);
			i++;
		}
	}
}

int main()
{	
	int fd;
	fd = 1;
	int c = 546554564;
	ft_putnbr_fd(c,fd);
}