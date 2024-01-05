/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 19:43:28 by aheitz            #+#    #+#             */
/*   Updated: 2024/01/05 19:53:19 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// swap main function.
t_list	**swap(t_list **stack)
{
	int		tmp;
	t_list	*first;
	t_list	*second;

	if (!stack)
		return (NULL);
	first = *stack;
	if (!first->next)
		return ;
	second = first->next;
	tmp = first->integer;
	first->integer = second->integer;
	second->integer = tmp;
	return (stack);
}

// Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements.
t_list	**sa(t_list **stack_a)
{
	if (!swap(stack_a))
		return (NULL);
	write(1, "sa", 2);
}

// Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements.
t_list	**sb(t_list **stack_b)
{
	if (!swap(stack_b))
		return (NULL);
	write(1, "sb", 2);
}

// sa and sb at the same time.
t_list	**ss(t_list **stack_a, t_list **stack_b)
{
	if (!swap(stack_a) || !swap(stack_b))
		return (NULL);
	write(1, "ss", 2);
}
