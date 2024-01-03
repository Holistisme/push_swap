/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:58:24 by aheitz            #+#    #+#             */
/*   Updated: 2023/11/15 10:04:48 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_strlen(const char *string)
{
	size_t	len;

	len = 0;
	if (!string)
		return (0);
	while (string[len])
		++len;
	return (len);
}
