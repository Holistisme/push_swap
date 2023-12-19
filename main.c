/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:35:39 by aheitz            #+#    #+#             */
/*   Updated: 2023/12/19 20:44:35 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "formatting.h"
#include <stdio.h>
#include <stdbool.h>

int main (void) {
	int		choice = 42;
	char	stack = '\0';
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
	printf(HBLU "\nThis is your stack 'a':\n\n" RESET);
	print_stack(stack_a);
	printf(HRED "\nThis is your empty stack 'b':\n\n🗍\n" RESET);
	print_stack(stack_b);
	choice = 42;
	while (choice) {
		(printf("\n" GRNHB), display_banner("MAKE YOUR DEMOCRATIC CHOICE!"), printf(RESET));
		printf(UWHT "\nList of executable actions :\n" RESET);
		printf(BLU "\n1 - 'Swap' instruction test\n" RESET);
		printf(RED "0 - Program exit\n" RESET);
		printf("\nI wish to operate the action ");
		scanf("%d", &choice);
		switch (choice)
		{
			case 1:
				printf("I want to test it on the stack ");
				scanf(" %c", &stack);
				if (stack == 'a')
					swap_test(stack_a);
				else if (stack == 'b')
					swap_test(stack_b);
				else
					printf(HRED "\nINVALID STACK!\n" RESET);
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

void	swap_test(t_list *stack) {
	(printf("\n" BLUHB), display_banner("SWAP TEST LAUNCHED"), printf(RESET));
	swap(&stack);
	printf(HGRN "\nHere is the swap result:\n\n" RESET);
	print_stack(stack);
	(printf("\n" BLUHB), display_banner("END OF THE SWAP TEST"), printf(RESET));
}
