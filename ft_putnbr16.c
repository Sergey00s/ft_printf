/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialgac <ialgac@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:47:03 by ialgac            #+#    #+#             */
/*   Updated: 2022/01/30 18:47:06 by ialgac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr16f(unsigned long int nbr, char *a)
{
	int	rtn;

	rtn = 0;
	if (nbr >= 16)
		rtn += ft_putnbr16f(nbr / 16, a);
	return (rtn + ft_putchar_fd(a[nbr % 16], 1));
}

int	ft_putnbr16(unsigned long nbr, char *a)
{
	return (ft_putstr_fd("0x", 1) + ft_putnbr16f(nbr, a));
}
