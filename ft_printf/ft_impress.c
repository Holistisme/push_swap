/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_impress.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:03:35 by aheitz            #+#    #+#             */
/*   Updated: 2023/11/15 14:06:07 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_impress(const char *str, va_list args)
{
	ssize_t	size;
	ssize_t	result;

	size = 0;
	while (*str)
	{
		if (*str == '%')
		{
			if (*str + 1 == '\0')
				return (-1);
			result = ft_checkvar(str + 1, args);
			if (result == -1)
				return (-1);
			size += result;
			if (*str)
				str += 2;
		}
		else
		{
			if (ft_putchar(*str++) == -1)
				return (-1);
			++size;
		}
	}
	return (size);
}
