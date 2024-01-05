/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 22:17:50 by aheitz            #+#    #+#             */
/*   Updated: 2024/01/05 22:48:50 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// push main function.
void	push(t_list **stack_src, t_list **stack_dst)
{
	t_list	*src_first;

	if (!stack_src || !stack_dst || !*stack_src)
		return ;
	src_first = *stack_src;
    *stack_src = (*stack_src)->next;
    src_first->next = *stack_dst;
	*stack_dst = src_first;
}

// Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.
void	pa(t_list **stack_a, t_list **stack_b)
{
	push(stack_b, stack_a);
	write(1, "pa\n", 3);
}
// Take the first element at the top of a and put it at the top of b.
// Do nothing if a is empty.
void	pb(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
	write(1, "pb\n", 3);
}
