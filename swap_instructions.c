/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:09:10 by aheitz            #+#    #+#             */
/*   Updated: 2024/01/03 23:18:16 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Inverts the first two integers of a linked list
void	swap(t_list **stack)
{
	int		tmp;
	t_list	*first;
	t_list	*second;

	if (!stack || !*stack)
		return ;
	first = *stack;
	if (!first->next)
		return ;
	second = first->next;
	tmp = first->integer;
	first->integer = second->integer;
	second->integer = tmp;
}
