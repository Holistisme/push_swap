/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checking.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 22:38:12 by aheitz            #+#    #+#             */
/*   Updated: 2024/01/08 18:15:56 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Checks if some arguments are duplicates.
void	clone_checking(t_list **stack)
{
	t_list	*current;
	t_list	*scan;

	current = *stack;
	while (current)
	{
		scan = current->next;
		while (scan)
		{
			if (current->integer == scan->integer)
				stop();
			scan = scan->next;
		}
		current = current->next;
	}
}

// Checks if some arguments aren’t integers.
char	*integer_checking(char *argv)
{
	size_t	index;

	while (*argv == 32 || (*argv > 8 && *argv < 14))
		++argv;
	index = 0;
	if (argv[index] == '-' || argv[index] == '+')
		++index;
	while (argv[index])
	{
		if (argv[index] < '0' || argv[index] > '9')
			stop();
		++index;
	}
	overflow_checking(argv);
	return (argv);
}

// Checks if some arguments are bigger than an integer.
void	overflow_checking(char *argv)
{
	char	*overflow_limit;
	size_t	index;

	overflow_limit = "2147483647";
	if (*argv == '-')
		overflow_limit = "2147483648";
	while (*argv == '-' || *argv == '0')
		++argv;
	index = 0;
	while (argv[index])
		++index;
	if (index > 10)
		stop();
	if (index < 10)
		return ;
	while (*argv)
	{
		if (value_checking(*argv, *overflow_limit) == -1)
			stop();
		if (value_checking(*argv++, *overflow_limit++) == 1)
			return ;
	}
}

// Checks integer character index against int_min/int_max
ssize_t	value_checking(char user_digit, char max_digit)
{
	if (user_digit > max_digit)
		return (-1);
	if (user_digit < max_digit)
		return (1);
	return (0);
}

// Program stop due to error
void	stop(t_list	**stack)
{
	free_stack(stack);
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}
