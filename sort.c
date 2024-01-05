/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:42:17 by aheitz            #+#    #+#             */
/*   Updated: 2024/01/05 21:43:17 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	sort(t_list **stack_a, t_list **stack_b)
// {
// 	t_list	*head_a;

// 	head_a = *stack_a;
// 	if (!head_a->next)
// 		return ;
// 	if (!head_a->next->next)
// 	{
// 		if (head_a->integer > head_a->next->integer)
// 		{
// 			write(1, "sa ", 3);
// 			swap(stack_a);
// 		}
// 		return ;
// 	}
// 	check_list(stack_a, stack_b);
// }

// void	check_list(t_list **stack_a, t_list **stack_b)
// {
// 	int		action;
// 	t_list	*current;
// 	t_list	*head;

// 	action = 1;
// 	head = *stack_a;
// 	current = head;
// 	while (action)
// 	{
// 		if (current->integer < head->integer)
// 		{
// 			write(1, "pb ", 3);
// 			push(stack_a, stack_b);
// 			write(1, "pb ", 3);
// 		}
// 	}
// }