/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:09:10 by aheitz            #+#    #+#             */
/*   Updated: 2024/01/05 17:05:09 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Inverts the first two integers of a linked list
void	swap(t_list **stack)
{
	int		tmp;
	t_list	*first;
	t_list	*second;

	if (!stack)
		return ;
	first = *stack;
	if (!first->next)
		return ;
	second = first->next;
	tmp = first->integer;
	first->integer = second->integer;
	second->integer = tmp;
}

void	push(t_list **stack_src, t_list **stack_dst)
{
	t_list	*src_head;

	if (!stack_src || !stack_dst || !*stack_src)
		return ;
	src_head = *stack_src;
	*stack_src = src_head->next;
	src_head->next = *stack_dst;
	*stack_dst = src_head;
}
