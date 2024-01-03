/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:35:39 by aheitz            #+#    #+#             */
/*   Updated: 2024/01/03 19:34:43 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//This is the main program for push_swap
int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	*current;

	if (argc <= 1)
		return (0);
	stack_a = stack_initialization(argc, argv);
	current = *stack_a;
	while (current)
	{
		ft_printf("%d\n", current->integer);
		current = current->next;
	}
	swap(stack_a);
	current = *stack_a;
	ft_printf("\n\n\n");
	while (current)
	{
		ft_printf("%d\n", current->integer);
		current = current->next;
	}
	return (0);
}
