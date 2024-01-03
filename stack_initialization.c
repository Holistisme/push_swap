/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_initialization.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:10:04 by aheitz            #+#    #+#             */
/*   Updated: 2024/01/03 23:17:51 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Initializes a stack using program arguments
t_list	**stack_initialization(int argc, char **argv)
{
	int		index;
	t_list	**head;
	t_list	*current;

	head = malloc(sizeof(t_list *));
	if (!head)
		return (NULL);
	index = 1;
	*head = add_node(integer_checking(argv[index++]));
	current = *head;
	while (index < argc)
	{
		current->next = add_node(integer_checking(argv[index++]));
		current = current->next;
	}
	duplicate_checking(*head);
	return (head);
}

//Adds node to a linked list
t_list	*add_node(char *argv)
{
	t_list	*node;

	node = NULL;
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
	while (*nptr)
		integer = integer * 10 + (*nptr++ - 48);
	return (integer * sign);
}
