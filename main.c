/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:35:39 by aheitz            #+#    #+#             */
/*   Updated: 2024/01/05 17:24:59 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//This is the main program for push_swap
int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;
	//t_list	*current_a;
	//t_list	*current_b;

	if (argc <= 1)
		return (0);
	stack_a = stack_initialization(argc, argv);
	stack_b = NULL;
	stack_b = malloc(sizeof(t_list *));
	if (!stack_b)
		return (0);
	// if (current_a && current_a->next)
	// {
	// 	if (current_a->integer > current_a->next->integer)
	// 		swap(stack_a);
	// }
	display(stack_a, stack_b);
	push(stack_a, stack_b);
	display(stack_a, stack_b);
	push(stack_a, stack_b);
	display(stack_a, stack_b);
	swap(stack_b);
	display(stack_a, stack_b);
	push(stack_b, stack_a);
	display(stack_a, stack_b);
	return (0);
}

void	display(t_list **stack_a, t_list **stack_b)
{
	t_list	*current_a;
	t_list	*current_b;

	current_a = *stack_a;
	current_b = *stack_b;
	ft_printf("a |");
	while (current_a)
	{
		ft_printf(" %d", current_a->integer);
		current_a = current_a->next;
	}
	ft_printf("\nb |");
	while (current_b)
	{
		ft_printf(" %d", current_b->integer);
		current_b = current_b->next;
	}
	ft_printf("\n");
}