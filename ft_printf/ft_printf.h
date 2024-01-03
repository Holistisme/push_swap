/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:15:16 by aheitz            #+#    #+#             */
/*   Updated: 2023/11/15 14:05:37 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int			ft_printf(const char *str, ...);
size_t		ft_strlen(const char *string);
ssize_t		ft_checkvar(const char *str, va_list args);
ssize_t		ft_impress(const char *str, va_list args);
ssize_t		ft_hex(unsigned long i, const char *base, int pointer);
ssize_t		ft_putchar(char c);
ssize_t		ft_putnbr(int n);
ssize_t		ft_putstr(char *s);
ssize_t		ft_unsignedputnbr(unsigned int n);

#endif