/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:09:10 by aheitz            #+#    #+#             */
/*   Updated: 2024/01/05 19:44:07 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

//Moves each integer to the previous position
t_list	**rotate(t_list **stack)
{
	t_list	*first;
	t_list	*current;

	if (!stack)
		return (NULL);
	first = *stack;
	*stack = first->next;
	current = *stack;
	while (current->next)
		current = current->next;
	current->next = first;
	first->next = NULL;
	return (stack);
}

//Moves each integer to the next position.
void	reverse_rotate(t_list **stack)
{
	t_list	*first;
	t_list	*current;
	t_list	*last;

	if (!stack)
		return ;
	first = *stack;
	current = *stack;
	while (current->next)
	{
		last = current;
		current = current->next;
	}
	last->next = NULL;
	*stack = current;
	current->next = first;
}
