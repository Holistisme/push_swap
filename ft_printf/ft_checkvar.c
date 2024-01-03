/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkvar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:17:59 by aheitz            #+#    #+#             */
/*   Updated: 2023/11/15 11:13:36 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_checkvar(const char *str, va_list args)
{
	if (*str == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (*str == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (*str == 'p')
		return (ft_hex(va_arg(args, unsigned long), "0123456789abcdef", 1));
	if (*str == 'd' || *str == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (*str == 'u')
		return (ft_unsignedputnbr(va_arg(args, unsigned int)));
	if (*str == 'x')
		return (ft_hex(va_arg(args, unsigned int), "0123456789abcdef", 0));
	if (*str == 'X')
		return (ft_hex(va_arg(args, unsigned int), "0123456789ABCDEF", 0));
	if (*str == '%')
		return (ft_putchar('%'));
	else if (*str)
		return (ft_putchar('%') + ft_putchar(*str));
	return (0);
}
