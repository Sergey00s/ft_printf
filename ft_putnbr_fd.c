/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialgac <ialgac@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:54:51 by ialgac            #+#    #+#             */
/*   Updated: 2022/01/12 21:07:50 by ialgac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(long n, int fd)
{
	long	rtn;

	rtn = 0;
	if (n == -2147483648)
	{
		rtn += ft_putchar_fd('-', fd);
		rtn += ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		rtn += ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n > 9)
		rtn += ft_putnbr_fd(n / 10, fd);
	return (rtn + ft_putchar_fd(n % 10 + '0', fd));
}
