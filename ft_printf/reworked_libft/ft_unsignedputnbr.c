/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedputnbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:17:11 by aheitz            #+#    #+#             */
/*   Updated: 2023/11/15 10:03:35 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

ssize_t	ft_unsignedputnbr(unsigned int n)
{
	ssize_t	count;

	count = 0;
	if (n >= 10)
		count += ft_unsignedputnbr(n / 10);
	if (ft_putchar((n % 10) + '0') == -1)
		return (-1);
	++count;
	return (count);
}
