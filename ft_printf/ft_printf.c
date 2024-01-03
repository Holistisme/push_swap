/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:49:15 by aheitz            #+#    #+#             */
/*   Updated: 2023/11/15 14:03:59 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list			arguments;
	ssize_t			size;

	va_start(arguments, str);
	size = ft_impress(str, arguments);
	va_end(arguments);
	return (size);
}
