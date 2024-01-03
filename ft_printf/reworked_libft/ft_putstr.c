/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 00:53:45 by aheitz            #+#    #+#             */
/*   Updated: 2023/11/15 10:01:22 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

ssize_t	ft_putstr(char *s)
{
	ssize_t	len;

	if (s == NULL)
		return (ft_putstr("(null)"));
	len = 0;
	return (write(1, s, ft_strlen(s)));
}
