/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 19:43:28 by aheitz            #+#    #+#             */
/*   Updated: 2024/01/05 22:17:09 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// swap main function.
void	swap(t_list **stack)
{
	if (!stack || !*stack || !(*stack)->next)
		return ;
	(*stack)->integer = (*stack)->integer ^ (*stack)->next->integer;
	(*stack)->next->integer = (*stack)->integer ^ (*stack)->next->integer;
	(*stack)->integer = (*stack)->integer ^ (*stack)->next->integer;
}

// Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements.
void	sa(t_list **stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

// Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements.
void	sb(t_list **stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 3);
}

// sa and sb at the same time.
void	ss(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}
