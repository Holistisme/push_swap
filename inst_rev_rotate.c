/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_rev_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:09:10 by aheitz            #+#    #+#             */
/*   Updated: 2024/01/08 14:32:56 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// rotate main function.
void	reverse_rotate(t_list **stack)
{
	t_list	*last;
	t_list	*penultimate;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	last = *stack;
	while (last->next)
	{
		penultimate = last;
		last = last->next;
	}
	last->next = *stack;
	*stack = last;
	penultimate->next = NULL;
}

// Shift down all elements of stack a by 1.
// The last element becomes the first one.
void	rra(t_list **stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

// Shift down all elements of stack b by 1.
// The last element becomes the first one.
void	rrb(t_list **stack_b)
{
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

// rra and rrb at the same time.
void	rrr(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}
