/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:35:39 by aheitz            #+#    #+#             */
/*   Updated: 2023/12/11 22:34:03 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "formatting.h"
#include <stdio.h>
#include <stdbool.h>

int main (void) {
	int		choice = 42;
	t_list	*stack_a = NULL;
	t_list	*stack_b;
	stack_b = NULL;

	(printf(WHTHB), display_banner("WELCOME TO THE TEST PROGRAM"), printf(RESET));
	(printf("\n" YELHB), display_banner("THROW INTEGERS INTO THE 'a' STACK AND FINISH WITH A -42!"), printf(RESET "\n"));
	while (true) {
		printf("I throw the number ");
		scanf("%d", &choice);
		if (choice == -42)
			break;
		integer_throwing(&stack_a, choice);
	}
	printf(HBLK "\nAnd here is the result of the throw:\n\n" RESET);
	print_stack(stack_a);
	printf(HGRN "-\na\n" RESET);
	choice = 42;
	while (choice) {
		(printf("\n" GRNHB), display_banner("MAKE YOUR DEMOCRATIC CHOICE!"), printf(RESET));
		printf(HBLU "\nList of executable actions :\n" RESET);
		//printf(BLU "1 - 'Swap' instruction test\n" RESET);
		printf(RED "0 - Program exit\n" RESET);
		printf("\nI wish to operate the action ");
		scanf("%d", &choice);
		switch (choice)
		{
			case 1:
				break;
			case 0:
				printf(HGRN "\nEnd of program confirmed!\n\n" RESET);
				break;
			default:
				printf(URED "\nError entering selection!\n" RESET);
				break;
		}
	}
	(printf(WHTHB), display_banner("STOP TEST PROGRAM"), printf(RESET "\n"));
	return (0);
}

void	print_stack(t_list *stack) {
	t_list	*current;

	current = stack;
	while(current) {
		printf("%d\n", current->integer);
		current = current->next;
	}
}

void	integer_throwing(t_list **head, int number) {
	t_list	*current;
	t_list	*new_element;

	if (!head)
		return;
	new_element = (t_list*)malloc(sizeof(t_list));
	if (!new_element)
		return;
	current = *head;
	new_element->integer = number;
	new_element->next = NULL;
	new_element->prev = current;
	if (!*head) {
		*head = new_element;
		return;
	}
	while (current->next)
		current = current->next;
	current->next = new_element;
}
