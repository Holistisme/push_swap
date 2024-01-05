/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:09:10 by aheitz            #+#    #+#             */
/*   Updated: 2024/01/05 22:51:39 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
