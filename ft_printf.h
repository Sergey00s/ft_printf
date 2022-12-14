/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialgac <ialgac@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:32:41 by ialgac            #+#    #+#             */
/*   Updated: 2022/02/02 18:33:27 by ialgac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define HEX "0123456789abcdef"
# define C_HEX "0123456789ABCDEF"

int	ft_putchar_fd(char c, int fd);
int	ft_putnbr_fd(int nbr, int fd);
int	ft_printf(const char *s, ...);
int	ft_putnbr16(unsigned long nbr, char *a);
int	ft_putnbr16x(unsigned int nbr, char *a);
int	ft_putstr_fd(char *s, int fd);
int	ft_putunbr_fd(unsigned int n, int fd);

#endif
