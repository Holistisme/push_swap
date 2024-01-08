/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_mgmt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:10:04 by aheitz            #+#    #+#             */
/*   Updated: 2024/01/08 18:10:52 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Initializes a stack using program arguments
t_list	**stack_initialization(int argc, char **argv)
{
	size_t	index;
	t_list	**head;
	t_list	*current;

	head = malloc(sizeof(t_list *));
	if (!head)
		return (NULL);
	index = 1;
	*head = add_node(integer_checking(argv[index++]));
	if (!*head)
		return (free_stack(head), NULL);
	current = *head;
	while (index < argc)
	{
		current->next = add_node(integer_checking(argv[index++]));
		if (!current->next)
		{
			free_stack(head);
			return (NULL);
		}
		current = current->next;
	}
	clone_checking(head);
	return (head);
}

//Adds node to a linked list
t_list	*add_node(char *argv)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->integer = ft_atoi(argv);
	node->next = NULL;
	return (node);
}

//Transcribes ASCII code to an integer
int	ft_atoi(const char *nptr)
{
	int	integer;
	int	sign;

	integer = 0;
	sign = 1;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	if (*nptr == '+')
		nptr++;
	while (*nptr)
		integer = integer * 10 + (*nptr++ - 48);
	return (integer * sign);
}

void	free_stack(t_list **stack)
{
	t_list	*current;

	if (stack)
	{
		while (*stack)
		{
			current = *stack;
			*stack = (*stack)->next;
			free(current);
		}
		free(stack);
	}
}
