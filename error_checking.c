/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checking.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 22:38:12 by aheitz            #+#    #+#             */
/*   Updated: 2024/01/03 23:15:54 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Checks duplicate numbers in the linked list
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
				stop();
			scan = scan->next;
		}
		current = current->next;
	}
}

//Checks the integer integrity
char	*integer_checking(char *argv)
{
	size_t	index;

	index = 0;
	while (argv[index])
	{
		if (argv[index] < '0' || argv[index] > '9')
		{
			if (!(argv[index] == '-' && index == 0))
				stop();
		}
		++index;
	}
	overflow_checking(argv);
	return (argv);
}

//Checks if integer is not overflowed
void	overflow_checking(char *argv)
{
	char	*overflow_limit;
	size_t	index;

	index = 0;
	while (argv[index])
		++index;
	if (index > 10 && !(index == 11 && argv[0] == '-'))
		stop();
	if (index < 10 || (index < 11 && argv[0] == '-'))
		return ;
	overflow_limit = "2147483647";
	if (argv[0] == '-')
		overflow_limit = "-2147483648";
	index = 0;
	while (argv[index])
	{
		if (value_checking(argv[index], overflow_limit[index]) == -1)
			stop();
		if (value_checking(argv[index], overflow_limit[index]) == 1)
			return ;
		++index;
	}
}

//Return error and stop program if so
void	stop(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

//Checks equality of one value with respect to the limit of another
ssize_t	value_checking(char user_digit, char max_digit)
{
	if (user_digit > max_digit)
		return (-1);
	if (user_digit < max_digit)
		return (1);
	return (0);
}
