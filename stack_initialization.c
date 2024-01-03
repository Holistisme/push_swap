/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_initialization.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:10:04 by aheitz            #+#    #+#             */
/*   Updated: 2024/01/03 19:35:01 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**stack_initialization(int argc, char **argv)
{
	int		index;
	t_list	**head;
	t_list	*current;

	head = malloc(sizeof(t_list *));
	if (!head)
		return (NULL);
	index = 1;
	*head = add_node(integer_check(argv[index++]));
	current = *head;
	while (index < argc)
	{
		current->next = add_node(integer_check(argv[index++]));
		current = current->next;
	}
	duplicate_checking(*head);
	return (head);
}

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

char	*integer_check(char *argv)
{
	size_t	index;

	index = 0;
	while (argv[index])
	{
		if (argv[index] < '0' || argv[index] > '9')
		{
			if (!(argv[index] == '-' && index == 0))
			{
				write(2, "Error\n", 6);
				exit(EXIT_FAILURE);
			}
		}
		++index;
	}
	return (argv);
}

void	duplicate_checking(t_list *stack)
{
	t_list	*current;
	t_list	*scan;

	current = stack;
	while (current)
	{
		scan = current->next;
		while (scan)
		{
			if (current->integer == scan->integer)
			{
				write(2, "Error\n", 6);
				exit(EXIT_FAILURE);
			}
			scan = scan->next;
		}
		current = current->next;
	}
}
