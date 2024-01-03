/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 01:06:17 by aheitz            #+#    #+#             */
/*   Updated: 2023/11/15 09:58:34 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

ssize_t	ft_putnbr(int n)
{
	ssize_t	count;

	count = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		++count;
		n = -n;
	}
	if (n >= 10)
		count += ft_putnbr(n / 10);
	if (ft_putchar((n % 10) + '0') == -1)
		return (-1);
	++count;
	return (count);
}
