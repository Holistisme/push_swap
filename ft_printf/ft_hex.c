/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:57:29 by aheitz            #+#    #+#             */
/*   Updated: 2023/11/15 10:56:08 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_hex(unsigned long i, const char *base, int pointer)
{
	ssize_t	count;

	count = 0;
	if (pointer)
	{
		if (ft_putstr("0x") == -1)
			return (-1);
		count += 2;
	}
	if (i >= 16)
		count += (ft_hex(i / 16, base, 0));
	if (ft_putchar(base[i % 16]) == -1)
		return (-1);
	++count;
	return (count);
}
