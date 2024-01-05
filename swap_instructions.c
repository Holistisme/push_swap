/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:09:10 by aheitz            #+#    #+#             */
/*   Updated: 2024/01/05 18:29:22 by aheitz           ###   ########.fr       */
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

//Takes the first integer from the src and sends it on the top of the dst
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

//Moves each integer to the next position
void	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*current;

	if (!stack)
		return ;
	first = *stack;
	*stack = first->next;
	current = *stack;
	while (current->next)
		current = current->next;
	current->next = first;
	first->next = NULL;
}
