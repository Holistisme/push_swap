/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:10:04 by aheitz            #+#    #+#             */
/*   Updated: 2023/12/19 20:28:03 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	if (!stack || !*stack)
		return ;
	first = *stack;
	if (!first->next)
		return ;
	second = first->next;
	if (second->next)
	{
		third = second->next;
		first->next = third;
		third->prev = first;
	}
	else
		first->next = NULL;
	second->prev = NULL;
	second->next = first;
	first->prev = second;
	*stack = second;
}
